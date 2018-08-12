#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int n,asci,arr[123],count=0;
	string str;
	cin >> n;
	
	cin >> str;
	if (n<24)
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