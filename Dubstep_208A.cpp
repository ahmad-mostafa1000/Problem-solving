#include <iostream>
#include <string>

using namespace std;

int main()
{
	string song;
	bool check=false;
	cin >> song;

	for (int i = 0; i < song.size(); i++)
	{
		if (song[i] == 'W'&&song[i + 1] == 'U'&&song[i + 2] == 'B')
		{
			i += 2;
			if (check)
			{
				cout << " ";
				check = false;
			}
		}
		else
		{
			cout << song[i];
			check = true;
		}
	}


	system("pause");
	return 0;
}


