#include <iostream>
#include <string>

using namespace std;

void answer(string word)
{
	bool check1 = false, check2 = false,bol=false;


		for (int i = 0;i<word.size();i++) //check each 2 elements
		{
			char temp = word[i];

			if (!check1)
			{
				if (word[i] == 'A' && word[i + 1] == 'B')
				{
					check1 = true;
					bol = true;
					i++;
				}
			}
			else if (!check2)
			{
				if (word[i] == 'B' && word[i + 1] == 'A')
				{
					check2 = true;
					i++;
				}
			}
			bol = false;
		}
		if(check1&&check2)
		{
			cout << "YES";
		return;
		}
		/////////////////////looking for "BA" first/////////////////////
		check1 = false, check2 = false;
		for (int i = 0;i<word.size();i++) //check each 2 elements
		{
			char temp = word[i];

		
			if (!check2)
			{
				if (word[i] == 'B' && word[i + 1] == 'A')
				{
					check2 = true;
					bol = true;
					i++;
				}
			}
			else if (!check1 )
			{
				if (word[i] == 'A' && word[i + 1] == 'B')
				{
					check1 = true;
					i++;
				}
			}

			bol = false;
		}

		if (check1&&check2)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
		return;
}

int main()
{

	//test cases:
	//string word="ABBA";
	//string word="BACDREAB";
	//string word="ABA";
	//string word = "ABABAB";
	//string word = "ABAB";
	string word;
	cin >> word;

	if (word.size() < 4) //check acceptable size
	{
		cout << "NO";
		return 0;
	}
	answer(word);


	system("pause");
	return 0;
}


