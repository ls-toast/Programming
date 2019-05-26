#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

deque <int> list;
bool visit[1001] = { 0, };
int cost[1001] = { 0, };
vector < pair<int, int> > arr;

void bfs(int tmp_cost)
{
	int list_size = list.size();
	int arr_size = arr.size();

	while (list_size--)
	{
		for (int i = 0; i < arr_size; i++)
		{
			if (arr[i].first == list.front())
			{
				if (!visit[arr[i].second])
				{
					list.push_back(arr[i].second);
					visit[arr[i].second] = true;
					cost[arr[i].second] = tmp_cost + 1;
				}
			}
			else if (arr[i].second == list.front())
			{
				if (!visit[arr[i].first])
				{
					list.push_back(arr[i].first);
					visit[arr[i].first] = true;
					cost[arr[i].first] = tmp_cost + 1;
				}
			}
		}
		list.pop_front();
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	int t, n, m, k;
	int i, j, h;
	cin >> t;
	while (t--)
	{
		list.clear();
		arr.clear();
		memset(visit, 0, sizeof(visit));
		memset(cost, 0, sizeof(cost));
		int min = 1000000000;
		int cap = 0;
		cin >> n >> m >> k;
		for (i = 0; i < n; i++)
		{
			cin >> h;
			if (min > h)
			{
				cap = i;
				min = h;
			}
		}
		for (i = 0; i < m; i++)
		{
			int va, vb;
			cin >> va >> vb;
			arr.push_back(make_pair(va, vb));
		}
		list.push_back(cap);
		visit[cap] = true;
		int tmp_cost = 0;
		for (i = 0; i < k; i++)
		{
			int query;
			cin >> query;
			while (!list.empty())
			{
				bfs(tmp_cost++);
			}
			if (visit[query])
				cout << cost[query] << endl;
			else
				cout << -1 << endl;
		}
	}
}
