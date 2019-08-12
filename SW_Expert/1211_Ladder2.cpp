/*
 * SW Expert Academy 1211 Ladder2
 *
 * Difficulty : D4
 * Memory : 12,568 Kb
 * Run-Time : 19ms
 *
 * URL : https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14BgD6AEECFAYh
 * */
#include <stdio.h>
#include <cstring>
int arr[100][100];
int map[100][100];
int goalX[100];
int idx;
 
int search()
{
    int goal;
    int min = 999999;
    while(idx)
    {
        int cnt = 0;
        int y = 99;
        int x = goalX[--idx];
        memcpy(map, arr, sizeof(arr));
        while (1)
        {
            if (y - 1 < 0)
            {
                if (min > cnt)
                {
                    min = cnt;
                    goal = x;
                }
                else if (min == cnt && goal < x)
                    goal = x;
                break;
            }
            else
            {
                if (x - 1 >= 0 && map[y][x - 1] == 1) {
                    cnt++;
                    map[y][x] = 0;
                    x--;
                }
                else if (x + 1 <= 99 && map[y][x + 1] == 1)
                {
                    cnt++;
                    map[y][x] = 0;
                    x++;
                }
                else if (map[y - 1][x] == 1)
                {
                    cnt++;
                    map[y][x] = 0;
                    y--;
                }
            }
        }
    }
    return goal;
}
 
int main()
{
    int i, j;
    int tc = 0;
    while (tc != 10)
    {
        scanf("%d", &tc);
        for (i = 0; i < 100; i++)
        {
            for (j = 0; j < 100; j++)
            {
                scanf("%d", &arr[i][j]);
                if (i == 99 && arr[i][j] == 1) {
                    goalX[idx++] = j;
                }
            }
        }
        printf("#%d %d\n", tc, search());
        memset(arr, 0, sizeof(arr));
        memset(goalX, 0, sizeof(goalX));
        idx = 0;
    }
    return 0;
}
