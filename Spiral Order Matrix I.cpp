#include<iostream>
#include<vector>

using namespace std;


int main()
{
	vector<int>v;
	bool right = true, left = false, up = false, down = false;
	int i = 0, j = 0, count = 0, c = 0;

	//input
	vector<vector<int>> vect{
		{1, 2},
		{3, 4},
		{5, 6 }
		
	};
	//row and columns size
	int s1 = vect.size();//row
	int s2 = vect[0].size();//col

	int size = s1*s2; //total number of elements
	while (count <size)
	{
		if (right) //going right
		{
			int steps = abs(s2 - (i +1));
			for (i; i <= steps; i++)
			{
				cout << vect[j][i];
				v.push_back(vect[j][i]);
				count++;
			}
			s1--;
			j++;
			i--;
			right = false;
			down = true;
		}
		else if (left) //going left
		{
			int steps = abs(s2 - (i-1));
			for (i; i >= steps; i--)
			{
				cout << vect[j][i];
				v.push_back(vect[j][i]);
				count++;
			}
			s1--;
			j--;
			i++;
			left = false;
			up = true;
		}
		else if (up) //going up
		{
			int steps = abs(s1 - (j+1));
			for (j; j >=steps; j--)
			{
				cout << vect[j][i];
				v.push_back(vect[j][i]);
				count++;
			}
			s2--;
			i++;
			j++;
			up = false;
			right = true;
		}

		else  //going down
		{
			int steps = abs(s2- (j - 1));
			for (j; j <= steps; j++)
			{
				cout << vect[j][i];
				v.push_back(vect[j][i]);
				count++;
			}
			s2--;
			i++;
			j--;
			down = false;
			left = true;
		}

	}


	system("pause");
	return 0;
}

