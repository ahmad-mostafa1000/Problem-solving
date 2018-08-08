#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, s, t,arr[100],sum1=0,sum2=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
		cin >> s >> t;
		int diff = abs(s - t);
		for (int i = 0; i < diff; i++)
		{
			sum1 += arr[i];
		}
		int j = 0;
		int min,max;
		if(s>t) 
			s=t ;

		s -= 1;
		int x = 0;
	while(x!=t)
	{
		s -= 1;
		x = (s%n + n) % n;
		sum2 += arr[x];
		j++;
	}

	(sum1>sum2) ? (cout << sum2) : (cout << sum1);
	system("pause");
	return 0;
}