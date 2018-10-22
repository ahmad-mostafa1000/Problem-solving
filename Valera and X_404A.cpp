#include <iostream>

using namespace std;

int main()
{
	int n;
	char temp, diagonal, regular;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			if (i == j || i + j == n - 1)//diagonal & antidiagonal
			{
				if (i == 0 && j == 0)
				{
					diagonal = temp;
				}
				else if (temp != diagonal)
				{
					cout << "NO";
					system("pause");
					return 0;
				}
			}
			else //regular
			{


				if (i == 0 && j == 1)
				{
					if (temp != diagonal)
						regular = temp;
					else
					{
						cout << "NO";
						system("pause");
						return 0;
					}
				}
				else if (temp != regular)
				{
					cout << "NO";
					system("pause");
					return 0;
				}
			}

		}
	}

	cout << "YES";
	system("pause");
	return 0;
}


