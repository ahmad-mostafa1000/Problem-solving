#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
	int k,temp,sum=0,count=0;
	vector<int>grow;
	cin >> k;
	if (k == 0) //case no growth needed
	{
		cout << 0;
		return 0;
	}
	for (int i = 0; i < 12; i++)
	{
		cin >> temp;
		grow.push_back(temp);
	}
	std::sort(grow.rbegin(), grow.rend());// sorting in descending order
	for (int i = 0; i < 12; i++)
	{
		sum += grow[i];
		count++;
		if (sum >= k)
		{
			cout << count;
			return 0;
		}
	}
	cout << -1; //case no solution
return 0;
}