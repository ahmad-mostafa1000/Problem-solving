#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	int count;
	string  a, b;
	cin >> a>>b;
	if (a == b)
		cout << -1;
	else
	{
		(a.size() > b.size()) ? cout << a.size() : cout<<b.size();
	}

	system("pause");
	return 0;
}


