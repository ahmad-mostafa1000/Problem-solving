#include<iostream>
#include<vector>

using namespace std;


int main()
{
	vector<int>v;
	bool right = true, left = false, up = false, down = false;
	int count = 0;

	//test cases 
	vector<vector<int>> vect{
		{1, 2,3,4},
		{10, 11,12,5},
		{9,8,7,6 }
	};

	/*vector<vector<int>> vect{
		{ 1, 2},
		{6, 3},
		{ 5, 4}
	};*/

	/*vector<vector<int>> vect{
		{ 1, 2,3,4 }
	
	};*/

	/*vector<vector<int>> vect{
		{ 1 }
	};*/

	//grid boundries
	int startR = 0;
	int startC = 0;
	int endR = vect.size()-1;//row
	int endC = vect[0].size()-1;//col
	//iterators
	int x = 0, y = 0;

	int size = vect[0].size()*vect.size(); //total number of elements
	while (count<size)
	{
		if (right) //going right
		{
			for (x=startC; x <= endC; x++)
			{
				cout << vect[startR][x];
				count++;
			}
			startR++;
			right = false;
			down = true;
		}
		else if (left) //going left
		{
			for (x = endC; x >= startC; x--)
			{
				cout << vect[endR][x];
				count++;
			}
			endR--;
			left = false;
			up = true;
		}
		else if (up) //going up
		{
			for (y=endR; y>=startR;y--)
			{
				cout << vect[y][startC];
				count++;
			}
			startC++;
			up = false;
			right = true;
		}

		else  //going down
		{
			for (y = startR; y <= endR;y++)
			{
				cout << vect[y][endC];
				count++;
			}
			endC--;
			down = false;
			left = true;
		}

	}


	system("pause");
	return 0;
}

