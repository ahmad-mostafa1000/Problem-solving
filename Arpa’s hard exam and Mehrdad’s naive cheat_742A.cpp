#include <iostream>
#include<string>
using namespace std;

int main()
{
	int n, arr[] = {8,4,2,6};
	cin >> n;

	if (n == 0)cout << 1;
	else  
	{
		cout << arr[((n -1)% 4)];
	}
	system("pause");
	return 0;
}


