#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map <string, int> mp;        // empty map container 
	map<string, int>::iterator it;

	mp.insert(pair <string, int>("Tetrahedron",4));
	mp.insert(pair <string, int>("Cube", 6));
	mp.insert(pair <string, int>("Octahedron", 8));
	mp.insert(pair <string, int>("Dodecahedron",12 ));
	mp.insert(pair <string, int>("Icosahedron", 20));

	int n,count=0;
	string temp;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		it = mp.find(temp);
		count += it->second;
	}
	cout <<count;
	system("pause");
	return 0;
}


