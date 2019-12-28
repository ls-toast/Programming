#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
vector<vector<pair<int, int>>> Tree;
int n, d[10010];
bool chk[10010];

int dfs(int x)
{
    int ret = x;
    int i;
	chk[x] = true;
	d[x] = 0;
	for (i = 0; i < Tree[x].size(); i++) 
    {
		int next = Tree[x][i].first;
		int cost = Tree[x][i].second;
		if (chk[next]) continue;
		int ret_next = dfs(next);
		if (d[x] < d[next] + cost) 
        {
			d[x] = d[next] + cost;
			ret = ret_next;
		}
	}
	return ret;
}
int main() 
{
    int i, u, v, w;
	cin >> n;
	Tree.resize(n);
	for (i = 0; i < n - 1; i++) {
		cin >> u >> v >> w;
		u--; v--;
		Tree[u].push_back({ v,w });
		Tree[v].push_back({ u,w });
	}
	int s = dfs(0);
	memset(chk, 0, sizeof(chk));
	memset(d, 0, sizeof(d));
	dfs(s);
	cout << d[s] << endl;
}