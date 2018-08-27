#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int>v;
	bool right=true, left=false, up = false, down = false;
	int i = -1, j = 0,count=0,c=0;
	
	//input
	vector<vector<int>> vect{
		{ 1, 2, 3 ,4},
		{  5, 6,7,8 },
		{ 9,10,11,12 },
		{13,14,15,16}
	};
	//row and columns size
	int s1 = vect.size();
	int s2= vect.size();

	int size = s1*s2; //total number of elements
	while (count <size)
	{
		if (right) //going right
		{
			i++;
			
			for (i; i < s1; i++)
			{
				cout<<vect[j][i];
				count++;
			}
			s1 --;
			i--;
			right = false;
			down = true;
		}
		else if (left) //going left
		{
			i--;
			for (i; i >= 0; i--)
			{
				cout<<vect[j][i];
				count++;
			}
			s1 --;
			i++;
			left = false;
			up = true;
		}
	
		else if (up) //going up
		{
			j--;
			for (j; j > 0; j--)
			{
				cout<<vect[j][i];
				count++;
			}
			s2 --;
			s1++;
			j++;			
			up = false;
			right = true;
		}
	
		else  //going down
		{
			j++;
			if (j == s2)
				s2++;
			for (j; j < s2; j++)
			{
				cout<<vect[j][i];
				c++;
				count++;
			}
			s2--;
			j--;
			down = false;
			left = true;
		}
	
	}

	
	system("pause");
	return 0;
}

