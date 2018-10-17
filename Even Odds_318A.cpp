#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
const int maximum = 100000;

int main()
{
	int n, k, l = 0;
	long int arranged[maximum];
	cin >> n>>k;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			arranged[l] = i;
			l++;
		}

	}
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)//even
		{
			arranged[l] = i;
			l++;
		}
	
	}



	cout << arranged[k-1];

	system("pause");
	return 0;
}

