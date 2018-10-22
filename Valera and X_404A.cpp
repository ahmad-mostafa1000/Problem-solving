#include <iostream>
#include<set>
using namespace std;

int main()
{
	int n;
	char temp;
	set<char> diagonal, regular;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			if (i == j || i + j == n - 1)//diagonal & antidiagonal
			{
				diagonal.insert(temp);
			}
			else //regular
			{
				regular.insert(temp);
			}

		}
	}

	(regular.size() == 1 && diagonal.size() == 1 && *regular.begin() != *diagonal.begin()) ? cout << "YES" : cout << "NO";

	system("pause");
	return 0;
}


