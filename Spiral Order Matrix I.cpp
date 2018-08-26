#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int>v;
	vector<int>::iterator it;
	bool right=true, left=false, up = false, down = false;
	int i = 0, j = 0,count=0,c=0;
	
	//input
	vector<vector<int>> vect{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 } 
	};
	//row and columns size
	int s1 = vect.size();
	int s2= vect.size();

	int size = s1*s2; //total number of elements
	while (count <size)
	{
		if (right) //going right
		{
			for (i; i < s1; i++)
			{
				v.push_back(vect[i][j]);
				c++;
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
				v.push_back(vect[i][j]);
				count++;
			}
			s1 --;
			i++;
			left = false;
			up = true;
		}
	
		else if (up) //going left
		{
			j--;
			for (j; j >= 0; j--)
			{
				v.push_back(vect[i][j]);
				count++;
			}
			s2 --;
			j++;
			up = false;
			right = true;
		}
	
		else  //going down
		{
			j++;
			for (j; j < s2; j++)
			{
				v.push_back(vect[i][j]);
				c++;
				count++;
			}
			s2--;
			j--;
			down = false;
			left = true;
		}
	
	}

	for (int i=0;i<v.size();i++)
	{
		cout << v[i]<<" ";
	}
	system("pause");
	return 0;
}

