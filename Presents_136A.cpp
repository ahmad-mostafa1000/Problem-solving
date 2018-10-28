#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	int n,arr[101];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[j]==i+1)
			{
				cout << j+1;
			}
		}
	}
	system("pause");
	return 0;
}


