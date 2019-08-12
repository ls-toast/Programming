/*
 * SW Expert Academy 1208 Flatten
 *
 * Difficulty : D3
 * Memory : 12,516 Kb
 * RunTime : 6ms
 *
 * URL : https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV139KOaABgCFAYh
 * */
#include <stdio.h>
#include <cstring>
int main()
{
    int arr[101] = { 0, };
    int i, cnt, input;
    int tc = 0;
    while (tc != 10)
    {
        int max = 0;
        int min = 101;
        scanf("%d", &cnt);
        for (i = 0; i < 100; i++)
        {
            scanf("%d", &input);
            if (input > max)
                max = input;
            if (input < min)
                min = input;
            arr[input]++;
        }
        while (cnt--)
        {
            if (arr[max] - 1 == 0)
            {
                arr[max]--;
                max--;
                arr[max]++;
            }
            else
            {
                arr[max]--;
                arr[max - 1]++;
            }
            if (arr[min] - 1 == 0)
            {
                arr[min]--;
                min++;
                arr[min]++;
            }
            else
            {
                arr[min]--;
                arr[min + 1]++;
            }
        }
        printf("#%d %d\n", ++tc, max - min);
        memset(arr, 0, sizeof(arr));
    }
}
