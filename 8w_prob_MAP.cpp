#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

int main()
{
	int t, n, id, i;
	string name;
	cin >> t;
	while (t--)
	{
		cin >> n;
		map <int, string> arrA;
		map <int, string> arrB;
		map <string, int> arrC;
		set <int> arrD;
		map <int, string>::iterator itA;
		map <string, int>::iterator itB;
		for (i = 0; i < n; i++)
		{
			cin >> id >> name;
			itA = arrA.find(id);
			itB = arrC.find(name);
			if (itA == arrA.end())
				arrA[id] = name;
			else
				arrB[id] = name;
			if (itB == arrC.end())
				arrC[name] = id;
			if (itA == arrA.end() && itB == arrC.end())
				continue;
			if(itA == arrA.end() && itB != arrC.end())
			{
				arrD.insert(itB->second);
				arrD.insert(id);
				continue;
			}
			if (itA->first != itB->second)
			{
				arrD.insert(itA->first);
				arrD.insert(itB->second);
			}
				
		}
		cout << arrB.size() << " " << arrD.size() << endl;
	}
}
