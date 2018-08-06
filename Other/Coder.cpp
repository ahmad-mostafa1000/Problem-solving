#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n=0,x,count=0;
	cin>>n;
	char** arr;
	arr = new char*[n];
	for (int i = 0;i<n;i++)
		arr[i] = new char[n];


	if (n > 1)
	{
			for (int i = 0; i < n; i++)
			{
				for (int j= 0; j < n; j++)
				{
					if (arr[i][j] != '.' && arr[i][j] != 'C')
					{
						count++;

						arr[i][j] = 'C';
						if (i + 1 < n)
							arr[i + 1][j] = '.';
						if (i - 1 > -1)
							arr[i - 1][j] = '.';
						if (j + 1 < n)
							arr[i][j+1] = '.';
						if (j - 1 > -1)
							arr[i][j-1] = '.';
					}
				}
			}
}
	else 
	{
		cout << 1<<endl<<'C';
	}

	cout << count<<endl;


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	for (int i = 0;i<n;i++)
		delete[] arr[i];
	delete[] arr;

	system("pause");
	return 0;
}