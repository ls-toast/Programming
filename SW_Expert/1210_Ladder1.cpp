/*
 * SW Expert Academy 1210 Ladder1
 *
 * Difficulty : D4
 * Memory : 12,528 Kb
 * RunTime : 16ms
 *
 * URL : https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14ABYKADACFAYh
 * */

#include <stdio.h>
#include <cstring>
int arr[100][100];

int search(int y, int x)
{
    while(1)
    {
        if(y-1 < 0)
            return x;
        else
        {
            if(x-1 >= 0 && arr[y][x-1] == 1) {
                arr[y][x] = 0;
                x--;
            }
            else if(x+1 <= 99 && arr[y][x+1] == 1)
            {
                arr[y][x] = 0;
                x++;
            }
            else if(arr[y-1][x] == 1)
            {
                arr[y][x] = 0;
                y--;
            }
        }
    }
}

int main()
{
    int i,j;
    int tc=0;
    int goalY,goalX;
    while(tc != 10)
    {
        scanf("%d",&tc);
        for(i = 0 ; i < 100; i ++)
        {
            for(j = 0; j < 100; j ++)
            {
                scanf("%d",&arr[i][j]);
                if(arr[i][j] == 2){
                    goalY = i;
                    goalX = j;
                }
            }
        }
        printf("#%d %d\n",tc,search(goalY, goalX));
        memset(arr,0,sizeof(arr));
    }
    return 0;
}
