#include<iostream>
#include<vector>

using namespace std;


int main()
{
	vector<int>v = { 0 ,0,0};
	int carry = 1;
	int i = 0;
	//remove leading zeroes
	if ( v.size()>1)
	{
		while (v[i] == 0 && v.size()!=1)
		{
			v.erase(v.begin());
		}
	}

	for (int i = v.size()-1; i > -1; i--)
	{
		v[i] += carry;
		carry = 0;
		if (v[i] == 10) 
		{
			v[i] = 0;
			carry = 1;
		}
		if (i == 0 && carry == 1)
		{
			v.insert(v.begin() , 1); //append 1 at the begining of the vector
		}
	}
	
	//printing
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i];
	}

	system("pause");
	return 0;
}

