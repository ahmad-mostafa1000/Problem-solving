#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	 long double n,m,a,w,l;
	cin >> n>>m>>a;

	w = a*ceil(n / a);
	w=w/a;
	l = a*ceil(m / a);
	l = l / a;
	cout << l + w ;

	
	system("pause");
	return 0;
}


