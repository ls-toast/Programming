#include <iostream>
#include <vector>
using namespace std;

vector <pair<int,int> > cord;
int arr[25][25];
bool chk[25][25];

void bfs(int n)
{
    int ans[25];
    int complex = 1;
    int cnt = 1;
    int curY = cord.back().first;
    int curX = cord.back().second;
    cord.pop_back();
    chk[curY][curX] = 1;
    while(!cord.empty())
    {
        int nx[4] = {0,0,-1,1};
        int ny[4] = {-1,1,0,0};
        int tmpy,tmpx;
        int i;
        bool flag = false;
        for(i = 0 ; i < 4 ; i ++)
        {
            tmpy = curY + ny[i];
            tmpx = curX + nx[i];
            if(tmpy > 25 || tmpy < 0 || tmpx > 25 || tmpx < 0)
                continue;
            else if(arr[tmpy][tmpx] != 0 && chk[tmpy][tmpx] != 1)
            {
                curY = tmpy;
                curX = tmpx;
                chk[curY][curX] = 1;
                arr[curY][curX] = complex;
                cnt ++;
                flag = true;
            }
        }
        if(!flag) {
            ans[complex++] = cnt;
            cnt = 1;
            while(1)
            {
                curY = cord.back().first;
                curX = cord.back().second;
                if(chk[curY][curX] == 0)
                    break;
                else
                    cord.pop_back();
            }
        }
    }
    cout << complex << endl;
}

int main()
{
    int n;
    int i,j;
    for(i = 0 ; i < n ; i ++)
    {
        for(j = 0 ; j < n; j ++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 1)
                cord.emplace_back(make_pair(i,j));
        }
    }
    bfs(n);
    return 0;
}