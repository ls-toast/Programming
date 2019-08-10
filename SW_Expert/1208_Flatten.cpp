/*
 * SW Expert Academy 1208 Flatten
 *
 * Difficulty : D3
 * Memory : 12,636 Kb
 * RunTime : 55ms
 *
 * URL : https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV139KOaABgCFAYh
 * */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cnt;
vector <int> height;

int dump()
{
    while(cnt--)
    {
        sort(height.begin(), height.end());
        height[0]++;
        height[99]--;
    }
    return height[98] - height[1];
}

int main()
{
    int t,i,j;
    int box[100];
    for(t = 1; t <= 10; t ++)
    {
        scanf("%d",&cnt);
        for(i = 0 ; i < 100; i ++)
        {
            scanf("%d",&box[i]);
            height.push_back((box[i]));
        }
        printf("#%d %d\n",t,dump());
        height.clear();
    }
}
