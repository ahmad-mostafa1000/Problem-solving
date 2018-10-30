#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	 int n, k,y[1000],count=0;
	 cin >> n>>k;
	for (int i = 1; i <= (2*n)+1; i++)
	{
		cin>>y[i];
	}
	for (int i = 2; i <= (2 * n) + 1; i+=2)
	{
		if (i+1<= (2 * n) + 1)//check it isnot last point
		{
			if (y[i]-1 > y[i + 1] && y[i]-1 > y[i - 1])
			{
				count++;
				y[i]--;
			}
			if (count == k)
				break;
		}
	}
	for (int i = 1; i <= (2 * n) + 1; i++)
	{
		cout<< y[i]<<" ";
	}
	system("pause");
	return 0;
}


