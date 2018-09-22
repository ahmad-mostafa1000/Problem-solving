#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
	int n,temp,sum=0;
	bool check1 = false, check2 = false;
	vector<int>p, t;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		p.push_back(temp);
		cin >> temp;
		t.push_back(temp);
		if (p[i] > t[i])
		{
			check1 = true;
			sum += p[i];
		}
		else 
		{
			check2 = true;
			sum += t[i];
		}
	}
	if (!check1)
	{
		std::sort(t.begin(), t.begin() + n-1);
		sum -= t[0];
		std::sort(p.begin(), p.begin() + n - 1);
		sum += p[n - 1];

	}
	if (!check2)
	{
		std::sort(p.begin(), p.begin() + n - 1);
		sum -= p[0];
		std::sort(t.begin(), t.begin() + n - 1);
		sum += t[n - 1];

	}
	cout << sum;
	system("pause");
	return 0;
}

