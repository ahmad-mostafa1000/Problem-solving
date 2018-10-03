#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
	char piece;
	int w = 0, b = 0;
	
	for (int i = 0; i < 64; i++)
	{
		cin >> piece;
		if (piece > 64 && piece < 90)//case white
		{
			if (piece == 'Q')
			{
				w += 9;
			}
			if (piece == 'R')
			{
				w += 5;
			}if (piece == 'B'|| piece == 'N')
			{
				w += 3;
			}if (piece == 'P')
			{
				w += 1;
			}
		}
		if (piece > 96 && piece < 123)//case black
		{
			if (piece == 'q')
			{
				b += 9;
			}
			if (piece == 'r')
			{
				b += 5;
			}
			if (piece == 'b' || piece == 'n')
			{
				b += 3;
			}
			if (piece == 'p')
			{
				b += 1;
			}
		}
		
	}
	
	if (w > b)
	{
		cout << "White";
	}
	else if (b > w)
	{
		cout << "Black";
	}
	else
	{
		cout << "Draw"; 
	}
system("pause");
return 0;
}