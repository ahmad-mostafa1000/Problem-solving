#include<iostream>
using namespace std;

int main()
{
	 int n, p, q,level,count=0,leveltopass[200];
	 cin >> n;
	cin>>p;
	for (int i = 0; i < p; i++)
	{
		cin >> level;
		if(leveltopass[level]!=1)
		{
			leveltopass[level] = 1;
			count++;
		}
	}
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> level;
		if (leveltopass[level]!=1)
		{
			leveltopass[level] = 1;
			count++;
		}
	}

	(count == n)?cout<<"I become the guy.": cout<<"Oh, my keyboard!";

	system("pause");
	return 0;
}

