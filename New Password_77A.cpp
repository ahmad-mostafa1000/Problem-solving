#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


int main()
{
	int n, k,asci=97,j=1;
	string alphapet= "abcdefghijklmnopqrstuvwxyz";
	string pass="a";
	cin >> n;
	cin >> k;

	for (int i = 1; i < n; i++)
	{		
		if (j >= k)
		   j = 0;

		pass.push_back(alphapet[j]);
		j++;
	}

	
		cout << pass;
	
	system("pause");
	return 0;
}

