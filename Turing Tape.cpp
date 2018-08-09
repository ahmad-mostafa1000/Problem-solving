#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int  n, count = 0;
	string seq;
	char x = 'H';
	int revX = 0;
	for (int i = 0; i < 8; i++)
	{
		
		revX <<= 1;//shift shmal
		revX |= x & 1;
		x >>= 1;//shift  ymeen

	}
	cout << x;


	cout << count;
	system("pause");

	return 0;

}