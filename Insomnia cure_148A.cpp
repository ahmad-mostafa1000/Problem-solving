#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n, k, l, m;

int main()
{
	int d,escape=0;

	cin >> k;
	cin >> l;
	cin >> m;
	cin >> n;

	cin >> d;

	for (int i = 1; i <= d; i++)
	{
		if (i%k!=0 & i%l!=0 & i%m !=0 & i%n!=0)
		{
			escape++;
		}
	}
	cout << d - escape;

	system("pause");
	return 0;
}
