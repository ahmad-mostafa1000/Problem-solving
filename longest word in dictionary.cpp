#include<iostream>
#include<vector>
#include <algorithm>
#include <string>

using namespace std;
//problem: https://techdevguide.withgoogle.com/paths/foundational/find-longest-word-in-dictionary-that-subsequence-of-given-string#!



int main()
{
	string s = "abppple";
	vector<string> d = { "kangaroo" ,"apple","able","bale","ale"};
	bool check = true;
	int k = 0;
	char temp;
	for (int i = 0; i < d.size(); i++)
	{
		if (i != 0 && check)
		{
			cout<< d[i-1];
			break;
		}
		check = true;k = 0;
		for (int j = 0; j < d[i].size(); j++)
		{
			if (!check)
				break;
			temp = d[i][j];
			for  (k; k < s.size(); k++)
			{
				if(temp==s[k])
				{
					check = true;
					break;
				}
				else
				{
					check = false;
				}
			}
		}
	}
	
system("pause");
return 0;
}