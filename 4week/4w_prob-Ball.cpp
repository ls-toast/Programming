#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	int n, l, k;
	int input;
	cin >> t;
	while (t--)
	{
		vector < pair<int,int> > list;
		cin >> n >> l >> k;
		for (int i = 0; i < n; i++)
		{
			cin >> input;
			if (input > 0)
				list.push_back(pair<int,int>(l - input,input));
			else
				list.push_back(pair<int,int>(-input,-input));
		}
		sort(list.begin(), list.end());
		cout << list[k-1].first << endl;
	}
}
