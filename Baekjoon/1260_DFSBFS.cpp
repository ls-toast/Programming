/*
 * Beakjoon 1260 DFS&BFS
 *
 * Memory : 2124 KB
 * Run-Time : 4ms
 *
 * URL : https://www.acmicpc.net/problem/1260
 * */
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;
bool chk[1001];
vector <int> stk;
queue <int> q;
vector <vector<int> > adj(1001);

void bfs(int stp)
{
    q.push(stp);
    chk[stp] = true;
    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        cout << front << " ";
        for(int i = 0 ; i < adj[front].size(); i ++)
        {
            int tmp = adj[front][i];
            if(!chk[tmp]) {
                q.push(tmp);
                chk[tmp] = true;
            }
        }
    }
    cout << endl;
}

void dfs(int stp)
{
    stk.push_back(stp);
    chk[stp] = true;
    cout << stp << " ";
    for(int i = 0 ; i < adj[stp].size(); i ++) {
        int tmp = adj[stp][i];
        if (!chk[tmp])
            dfs(tmp);
    }
}

int main()
{
    int n, m, v;
    int vs, ve;
    int i,j;
    cin >> n >> m >> v;
    for(i = 0 ; i < m ; i ++)
    {
        cin >> vs >> ve;
        adj[vs].push_back(ve);
        adj[ve].push_back(vs);
    }
    for(i = 0; i < n; i ++)
        sort(adj[i].begin(), adj[i].end());
    dfs(v);
    cout << endl;
    memset(chk,false,sizeof(chk));
    bfs(v);
    return 0;
}
