#include <iostream>
using namespace std;

int main()
{
	long long int n;
	cin >> n;

	(n%2==0) ? cout << n/2 : cout << "-"<<(n+1)/2;

	system("pause");
	return 0;
}


