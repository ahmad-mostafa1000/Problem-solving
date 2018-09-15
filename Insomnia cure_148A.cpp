#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n, k, l, m;

//we are looking for numbers that has multiples of l,m,n,k
//and inc killed number and print it.
int main()
{
	int d,killed=0;
	cin >> k;
	cin >> l;
	cin >> m;
	cin >> n;

	cin >> d;

	for (int i = 1; i <= d; i++)
	{
		if (i%k==0 | i%l==0 | i%m ==0 | i%n==0)
		{
			killed++;
		}
	}
	cout << killed;

	system("pause");
	return 0;
}
