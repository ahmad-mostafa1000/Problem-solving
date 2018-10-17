#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
string alphapet = "qwertyuiopasdfghjkl;zxcvbnm,./";

int index(char t)
{
	for (int i = 0; i < alphapet.size(); i++)
	{
		if (t == alphapet[i])
			return i;
	}
}
int main()
{
	char direction;
	string message;
	cin >> direction;
	cin >> message;

	if (direction=='L')
	{
		for (int i = 0; i < message.size(); i++)
		{
			message[i] =alphapet[index(message[i]) +1];
		}
}

	if (direction == 'R')
	{
		for (int i = 0; i < message.size(); i++)
		{
			message[i] = alphapet[index(message[i])- 1];
		}
	}

	
		cout << message;
	
	system("pause");
	return 0;
}

