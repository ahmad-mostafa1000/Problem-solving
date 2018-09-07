#include<iostream>
using namespace std;

int main()
{
	int  p,n,count=0;
	cin >> p;

	for (int i=1; i< p; i++)
	{
		 n = i;
		bool check = true;
		 int x = 1;

		for (int j = 1; j < p-1; j++)
		{
			x *= n;
			if (x%p == 1)//check 
			{
				check = false;
				break;
			}
		}
		if (check)
		{
			x *= n;
			if (x%p == 1)
			{
				count ++;
			}
		}


	}
	cout << count;
	system("pause");
	return 0;
}
