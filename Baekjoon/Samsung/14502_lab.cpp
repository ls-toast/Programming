#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;

int n,m;
int arr[8][8];
int ans;
bool visit[8][8];
queue <pair<int,int> > Q;

void spread()
{
    int cnt = 0;
    int i,j;
    int tarr[8][8];
    int nx[4] = {0,0,-1,1};
    int ny[4] = {-1,1,0,0};
    int y,x;
    queue <pair<int,int> > tQ;
    tQ = Q;
    memcpy(tarr,arr,sizeof(arr));
    while(!tQ.empty())
    {
        y = tQ.front().first;
        x = tQ.front().second;
        tQ.pop();
            for(i = 0 ; i < 4; i ++)
            {
                int tmpy = y + ny[i];
                int tmpx = x + nx[i];
                if(tmpy >= n || tmpy < 0 || tmpx >= m || tmpx < 0)
                    continue;
                else if(tarr[tmpy][tmpx] == 0)
                {
                    tQ.push(make_pair(tmpy,tmpx));
                    tarr[tmpy][tmpx] = 2;
                }
            }
    }
    for(i = 0 ; i < n ; i ++)
    {
        for(j = 0 ; j < m; j ++)
        {
            if(tarr[i][j] == 0)
                cnt ++;
        }
    }
    ans = max(ans,cnt);
}

void wall(int cnt)
{
    int i,j;
    if(cnt == 3)
    {
        spread();
        memset(visit,0,sizeof(visit));
        return;
    }
    for(i = 0; i < n; i ++)
    {
        for(j = 0; j < m; j ++)
        {
            if(arr[i][j] == 0)
            {
                arr[i][j] = 1;
                wall(cnt+1);
                arr[i][j] = 0;
            }
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    int i,j;
    cin >> n >> m;
    for(i = 0 ; i < n ; i ++)
    {
        for(j = 0 ; j < m; j ++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 2) {
                Q.push(make_pair(i, j));
            }
        }
    }
    wall(0);
    cout << ans << endl;
}
