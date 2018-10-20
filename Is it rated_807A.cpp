#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int n, max=5000, diff , a,b;
	string answer;
	cin >> n;
		
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		diff = b - a;
		if (diff > 0 || diff < 0)
		{
			cout<< "rated";
			system("pause");
			return 0;
		}
		if (a > max)
		{
			answer= "unrated";
		
		}
		max = a;
	}
	if(answer.size()<1)
	{
	answer= "maybe";
	}
	cout << answer;
	system("pause");
	return 0;
}

