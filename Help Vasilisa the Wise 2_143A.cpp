#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	 int a,b,c,d,r1,r2,d1,d2,c1,c2;
	 cin >> r1>>r2>>c1>>c2>>d1>>d2;
	
	for ( a = 1;a<10;a++)
	{
		for ( b= 1; b<10;b++)
		{
			for ( c = 1; c<10;c++)
			{
				for ( d = 1;d<10;d++)
				{
					if (a + b == r1 && a + d == d1 && c + d == r2 && b + c == d2 && a+c==c1 && b+d==c2 && a!=b && b!=c && c!=d&&a!=d && a!=c&&b!=d)
					{
						cout << a << " " << b << endl;
						cout << c << " " << d << endl;
						system("pause");
						return 0;
					}
				}
			}
		}
	}

	cout << -1;
	system("pause");
	return 0;
}


