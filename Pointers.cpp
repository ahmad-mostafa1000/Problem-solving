#include<iostream>

using namespace std;
const int n=2,m=3;

//explaining pointers 
int main()
{
	cout << "- 1-d array"<<endl;
	int c[3] = {1,2,3};
	int *x = c;
	cout << "- get start address of the array by different ways: "<<endl;
	//getting c[0] address
	cout << c << endl;//address of first index in the array c[0]
	cout << x << endl;//address of first index in the array c[0]
	cout << *x << endl; //print value inside first index in the array

	cout << endl;
	//
	cout << "- 2-d array"<<endl;
	int b[n][m] = { {1,2,3} ,{4,5,6} };
						 //int *p=b; //try it
	int (*p)[m] = b;	//the pointer has to be the same type of what it points to

	cout << "- b[0][0] address in different ways: "<<endl;	//getting start address of the array by different ways
	cout<< b << endl;
	cout <<p<<endl;
	cout << b[0] << endl;
	cout<<&b[0][0]<<endl;
	cout << *p<<endl; //it points to address not value as in 1-d array example

	cout << "- b[1][0] address in different ways: "<<endl;
	cout << b[1] << endl;
	cout << &b[1] << endl;
	cout << &b[1][0] << endl;
	cout << b + 1 << endl;
	cout << *(b+1) << endl;

	cout << "- b[0][1] address"<<endl;
	cout << *b + 1<<endl; //pointer to second element pointed by b[0]

	cout << "- b[0][1] value" << endl;
	cout << *(*b + 1); 

	cout << endl;
	system("pause");
	return 0;
}
