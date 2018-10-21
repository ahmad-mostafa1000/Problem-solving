#include <iostream>
#include <string>

using namespace std;

int main()
{
	//test cases:
	//string word = "A";
	string word = "ABCBA";
	//string word = "ABCDBA";

	int j = word.size()-1;
	if(j%2!=0)
	{
		cout << "NO";
		system("pause");
		return 0;
	}

	for (int i = 0; i < word.size(); i++)
	{
		if(word[i]!=word[j])
		{
			cout << "NO";
			system("pause");
			return 0;
		}
		j--;
	}
	cout << "YES";
	system("pause");
	return 0;
}