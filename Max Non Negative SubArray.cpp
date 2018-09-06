#include<iostream>
#include<vector>

using namespace std;


int main()
{
	vector<int>longest_subset;
	vector<int>index;
	int startindex = 0;
	int endindex = 0;
	long long int max = -1, count = 0, diff1 = 0, diff2 = 0;
	bool negative = false, newsubset = true, zero = false;

	//test cases
	//vector<int>v = { 0 ,1,-2,-1,2,3,4};
	
	//vector<int>v = {-1 ,-2,0 };
	//vector<int>v = { -1 ,0,0,-1,1 };
	
	vector<int>v = { 1967513926, 1540383426, -1303455736, -521595368 };
	//vector<int>v = { 1,2,3,4};
	//vector<int>v = {1, 2, 5, -7, 2, 5};
	//vector<int>v = {-1,1,2,1,-1,1,1,2};


	bool check = false;
	v.push_back(-1);
	for (int i = 0; i < v.size(); i++)
	{					
		if (v[i] > -1) //case positive value
		{
			check = true;
			count+=v[i];
			negative = true;
			if(newsubset)
			index.push_back(i); //

			newsubset = false;
		}
		else if(check) //case negative value
		{
			check = !check;
			if(max<count)
			{
				max = count;
				index.push_back(i - 1);
			}
			else if (count == max) //comparing lenghts
			{
				// start-end
				diff1 = (i - 1) - index.back();
				int x = index.back() - 1;
				diff2 = index[index.size() - 2] - index[index.size() - 3];

				int ind = index.size()-1;
				//index.erase(index.begin() + (ind - 1)), index.erase(index.begin() + (ind - 2)),
				if (diff1 > diff2)
				{
					index.push_back(i - 1);
				}
				else	if (diff1 == diff2)
				{
					(i - 1) > index.back() - 1 ? index.pop_back() : index.push_back(i - 1);
				}
				else //diff2>diff1
				{
					index.pop_back();
				}
			
			}
			else 
			{
				index.pop_back();//remove last starting index of subseq.
			}
			count = 0;
			newsubset = true;
		}
		negative = false;
	}



	//if (count > max&&max!=-1)
	//{
	//	max = count;
	//	 startindex = index.back();
	//	 endindex = v.size() - 1;
	//}
	bool check1 = false;
	 if(index.size()>1)
	{
		startindex =index[index.size()-2];
		endindex = index[index.size()-1] ;
		check1 = true;
	 }
	
	 if (check1)
	 {
		 for (int i = startindex; i <= endindex; i++)
		 {
			 longest_subset.push_back(v[i]);
			 cout << v[i];
		 }
	 }

	system("pause");
	return 0;
}

