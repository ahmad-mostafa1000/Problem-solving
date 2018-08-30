#include<iostream>
#include<vector>

using namespace std;


int main()
{
	//test cases

	vector<int>v = { 0 ,1,-2,-1,2,3,4};
	//vector<int>v = {-1 ,-2,0 };
	//vector<int>v = { -1 ,0,-1 };
	//vector<int>v = { 0 ,0,0,-1,1,2,3,4,-1};
	//vector<int>v = { 1,2,3,4};
	//vector<int>v = { -1};

	int max = 0, count = 0;
	bool positive = false;
	for (int i = 0; i < v.size(); i++)
	{					
		if (v[i] > -1) //case positive value
		{
			count++;
			positive = true;
		}
		else if (count > max && !positive) //case negative value
		{
			max = count;
			count = 0;
		}
		positive = false;
	}
	if (count > max)
		max = count;

	cout << max;
	system("pause");
	return 0;
}

