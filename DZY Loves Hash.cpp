#include<iostream>
#include<vector>
using namespace std;
//
int main()
{
	int  p, temp,n, count = 0;
	vector<int> arr(300);
	cin >> p;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		count++;
		cin >> temp;
		temp = (temp%p);
		if (arr[temp] == 1)
		{
			cout << count;
			system("pause");
			return 0;
		}
		else arr[temp] = 1;
	}

	cout << -1;
	system("pause");
	return 0;
}
