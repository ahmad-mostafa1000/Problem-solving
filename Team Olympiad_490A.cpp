#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

//the main idea is to track thr indeces of the elements while reading them
//then check if the elements are enough to create teams and 
//then printing them 
int main()
{
	int n,arr[5000],temp,min1,min2;
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp == 1)
			v1.push_back(i);
		if (temp == 2)
			v2.push_back(i);
		if (temp == 3)
			v3.push_back(i);
	}

(v1.size()>v2.size()) ? min1=v2.size() : min1 = v1.size();
(v3.size()>min1) ? min2 = min1 : min2 = v3.size();
if (min2 == 0)
{
	cout << "0";
	return 0;
}
else 
{
	cout << min2<<endl;
	for (int i = 0; i < min2; i++)
	{
		cout << v1[i]+1<<" ";
		cout << v2[i] + 1 << " ";
		cout << v3[i] + 1 << " ";
		cout << endl;
	}

}


	system("pause");
	return 0;
}
