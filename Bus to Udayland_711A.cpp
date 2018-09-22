#include<iostream>
#include<vector>
#include <string>

using namespace std;


int main()
{
	int n;
	vector<string>seats;
	string seat_status;
	bool check = false;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> seat_status;
		if (seat_status[0] == 'O' && seat_status[1] == 'O' &&!check)
		{
			seat_status[0] = '+';
			seat_status[1] = '+';
			check = true;
		}
		else if (seat_status[3] == 'O' && seat_status[4] == 'O' && !check)
		{
			seat_status[3] = '+';
			seat_status[4] = '+';
			check = true;
		}
		seats.push_back(seat_status);

	}

	if (check)
	{
		cout << "YES"<<endl;
		for (int i = 0; i < n; i++)
		{
			cout << seats[i]<<endl;
		}
	}
	else cout << "NO"; 

system("pause");
return 0;
}