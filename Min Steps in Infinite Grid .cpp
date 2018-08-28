#include<iostream>
#include<vector>
#include <algorithm>    // std::max

using namespace std;



int coverPoints(vector<int> &A, vector<int> &B)
{
	int ans = 0;int A1, A2, B1, B2;
	if (A.size()>1)
	{
		for (int i = 0;i<A.size() - 1;i++)
		{
			ans = ans + (abs(A[i] - A[i + 1])<abs(B[i] - B[i + 1]) ? abs(B[i] - B[i + 1]) : abs(A[i] - A[i + 1]));

		}
	}
	return ans;
}

int main()
{
	vector<int> x = { 1,2,3 };
	vector<int> y= { 1,2,3 };

	cout<<coverPoints(x, y);

	system("pause");
	return 0;
}

