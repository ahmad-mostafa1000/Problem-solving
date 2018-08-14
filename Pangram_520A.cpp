#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

//we to realize that to satisfy the condition of pangram is that n should be greater than or equal 26
//then we check that the given string contain all alphapet chars
//arr is used to check for ascii code for all lower case letters starting from 97 to 122
int main()
{
	int n,asci,arr[123],count=0;
	string str;
	cin >> n;
	
	cin >> str;
	if (n<26)
	{
		cout << "NO";return 0;
	}
		std::transform(str.begin(), str.end(), str.begin(), ::tolower);
		for (int i = 0; i < n; i++)
		{
			asci = int(str[i]);
			if (arr[asci] != 1)
			{
				arr[asci] = 1;
				count++;
			}
		}

(count==26) ? cout << "YES	" : cout << "NO";

	system("pause");
	return 0;
}
