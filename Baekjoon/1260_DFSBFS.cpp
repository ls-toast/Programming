/*
 * Beakjoon 1260 DFS&BFS
 *
 * Memory : 99672 KB
 * Run-Time : 12ms
 *
 * URL : https://www.acmicpc.net/problem/1260
 * */

#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
bool matrix[10001][10001];
bool visit[10001];
vector <int> stk;
deque <int> que;

void dfs(int st, int n)
{
    bool flag;
    int i,cur;
    cur = st;
    stk.emplace_back(cur);
    visit[cur] = 1;
    cout << cur << " ";
    while(!stk.empty()) {
        flag = false;
        for (i = 1; i <= n; i++) {
            if (matrix[cur][i] != 0 && visit[i] != 1) {
                cur = i;
                stk.emplace_back(cur);
                visit[cur] = 1;
                flag = true;
                cout << cur << " ";
                i = 0;
            }
        }
        if(!flag) {
            stk.pop_back();
            cur = stk.back();
        }
    }
    cout << endl;
}

void bfs(int st, int n)
{
    bool flag;
    int i, cur;
    que.emplace_back(st);
    while(!que.empty())
    {
        flag = false;
        cur = que.front();
        que.pop_front();
        cout << cur << " ";
        visit[cur] = 1;
        for(i = 1; i <= n; i ++)
        {
            if(matrix[cur][i] != 0 && visit[i] != 1) {
                que.emplace_back(i);
                visit[i] = 1;
            }
        }
    }
}

int main()
{
    int nNode, nEdge;
    int stNode, aN, bN;
    int i,j;
    cin >> nNode >> nEdge >> stNode;
    for(i = 1 ; i <= nEdge; i ++)
    {
        cin >> aN >> bN;
        matrix[aN][bN] = 1;
        matrix[bN][aN] = 1;
    }
    dfs(stNode, nNode);
    memset(visit, 0, sizeof(visit));
    bfs(stNode, nNode);
}
