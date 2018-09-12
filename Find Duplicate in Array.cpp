#include<iostream>
using namespace std;

int main()
{
	int A[] = { 3,  1,4, 1 ,4,1};
int slow = A[0];
int fast = A[A[0]];
while (slow != fast) {
	slow = A[slow];
	fast = A[A[fast]];
}

fast = 0;
while (slow != fast) {
	slow = A[slow];
	fast = A[fast];
}
if (slow == 0) cout << -1;//return -1;
cout << slow;
//return slow;
system("pause");
return 0;
}