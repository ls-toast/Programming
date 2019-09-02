/*
 * Beakjoon 15686 chick_delivery
 * 
 * Memory : 1996 KB
 * Run-Time : 4ms
 *
 * URL : https://www.acmicpc.net/problem/15686
 * */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[50][50];
bool chk[15];
int m,res=99999999;
vector <pair<int,int> > home;
vector <pair<int,int> > shop;

void search(int num, int cnt)
{
    int i,j;
    int tmp=0;
    if(num > shop.size())
        return;
    if(cnt == m)
    {
        for(i = 0 ; i < home.size(); i ++)
        {
            int min=99999999;
            for(j = 0 ; j < shop.size(); j ++)
            {
                if(chk[j])
                {
                    int tmpX = abs(home[i].first - shop[j].first);
                    int tmpY = abs(home[i].second - shop[j].second);
                    if(min > tmpX+tmpY)
                        min = tmpX+tmpY;
                }
            }
            tmp += min;
        }
        if(tmp < res)
            res = tmp;
        return;
    }
    chk[num] = true;
    search(num+1, cnt+1);
    chk[num] = false;
    search(num+1, cnt);
}

int main()
{
    int n;
    int i,j;
    cin >> n >> m;
    for(i = 0 ; i < n; i ++)
    {
        for(j = 0 ; j < n; j ++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 1)
                home.emplace_back(make_pair(i,j));
            else if(arr[i][j] == 2)
                shop.emplace_back(make_pair(i,j));
        }
    }
    search(0,0);
    cout << res << endl;

    return 0;
}
