#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
	//test cases:
//	vector<int>input = {10,8,1,0,6,5,7};
//	vector<int>input ={ 1, 2, 3, 4 };
	vector<int>input = {6,4,1,2,1,7,10};
	vector<int>wave;

	std::sort(input.begin(), input.begin() +input.size()); 
	
	for (int i=0;i<input.size();i++)
	{
		if (i % 2 == 0 && i+1<=input.size()-1) //even indices
		{
			wave.push_back(input[i+1]);
			cout << input[i + 1];
		}
		else if(i % 2 != 0)//odd indices
		{
			wave.push_back(input[i - 1]);
			cout << input[i -1];
		}
		else
		{
			wave.push_back(input[i]);//last element
			cout << input[i];
		}
	}

	//Another solution: 1) sort array
				//      2) swap each two adjacent elements
	system("pause");
	return 0;
}

