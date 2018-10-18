#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	long long int n, k, l = 0, middle;
	cin >> n;
		cin>>k;
	(n % 2 == 0)?middle = n / 2: middle = (n / 2)+1;
	

	if (k<=middle) //oddnumber
	{
		cout << k * 2 - 1;

	}
	else //even number
	{
		cout << (k - middle) * 2;

	}
	system("pause");
	return 0;
}

