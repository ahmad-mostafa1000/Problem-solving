#include<iostream>
#include<vector>

using namespace std;


int main()
{
	int n,minprice=100000,temp, ans=0;
	vector<int>p;
	vector<int>a;

	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		a.push_back(temp);
		cin >> temp;
		p.push_back(temp);

	}
	for (int i = 0; i < n; i++)
	{
		p[i] < minprice ? minprice = p[i],ans += p[i] * a[i]:ans += minprice*a[i];
	}
	cout << ans;
	system("pause");
	return 0;
}