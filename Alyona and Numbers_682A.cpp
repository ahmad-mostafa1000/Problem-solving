#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	int n, m,arr1[5], arr2[5];
	memset(arr1, 0, sizeof(arr1));
	memset(arr2, 0, sizeof(arr2));
	cin >> n>>m;
	for (int i = 1; i <= n; i++)
	{
		arr1[i%5]++;
	}
	for (int i = 1; i <= m; i++)
	{
		arr2[i % 5]++;
	}
	cout << arr1[0] * arr2[0] +arr1[1]*arr2[4]+arr1[4]*arr2[1]+arr1[2]*arr2[3]+arr1[3]*arr2[2];

	system("pause");
	return 0;
}


