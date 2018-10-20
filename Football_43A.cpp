#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, c1 = 0, c2 = 0;
	string a, b, temp;
	cin >> n;
	for (int i = 0;i<n;i++)
	{
		cin >> temp;
		if (i == 0)
			a = temp;
		if (temp != a)
		{
			b = temp;
			c2++;
		}
		else
		{
			c1++;
		}

	}
	(c1>c2) ? cout << a : cout << b;

	system("pause");
	return 0;
}