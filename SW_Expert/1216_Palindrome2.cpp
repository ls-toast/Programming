/*
 * SW Expert Academy 1216 Palindrome2
 *
 * Difficulty : D3
 * Memory : 12,492 Kb
 * Run-Time : 183 ms
 *
 * URL : https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14Rq5aABUCFAYi 
 * */

#include <stdio.h>

int main()
{
    int len, limit;
    char arr[100][100];
    int i, j, k, t;
    for (t = 1; t <= 10; t++)
    {
        int max = 0;
        scanf("%d", &t);
        for (i = 0; i < 100; i++)
        {
            for (j = 0; j < 100; j++)
            {
                scanf(" %c", &arr[i][j]);
            }
        }
        for (i = 0; i < 100; i++)
        {
            for (len = 2; len < 100; len++)
            {
                limit = 100 - len;
                for (j = 0; j <= limit; j++)
                {
                    for (k = 0; k < len; k++)
                        if (arr[i][j + k] != arr[i][j + len - 1 - k])
                            break;
                    if (k == len)
                    {
                        if (len > max)
                            max = len;
                    }
                    for (k = 0; k < len; k++)
                        if (arr[j + k][i] != arr[j + len - 1 - k][i])
                            break;
                    if (k == len)
                    {
                        if (len > max)
                            max = len;
                    }
                }
            }
        }
        printf("#%d %d\n", t, max);
    }
    return 0;
}
