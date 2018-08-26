#include<iostream>
#include<vector>
using namespace std;

int main()
{
	static int N = 1000;//max size
	int n=0,x,count=0;
	cin>>n;
	char arr[N][N];
	
	
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

	cout << count<<endl;

//printing
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}



	system("pause");
	return 0;
}
