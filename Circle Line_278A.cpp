#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n, s, t, arr[100], x, sum = 0, sum1 = 0, min, max;
	cin >> n;
	//reading input
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
		cin >> s >> t;
		min = std::min(s, t);
		max = std::max(s, t);

		for (int i = min-1; i < max-1; i++)
		{
			sum1 += arr[i];
		}

		x = abs(sum1 - sum);//absolute diff
	(sum1>x) ? (cout << x) : (cout << sum1);

	system("pause");
	return 0;
}
