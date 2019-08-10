/*
 * SW Expert Academy 1215 Palindrome1
 * 
 * Difficulty : D3
 * Memory : 12,488 Kb
 * Runtime : 6ms
 * 
 * URL : https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14QpAaAAwCFAYi
 * */

#include <stdio.h>
 
int main()
{
    int len, limit;
    char arr[8][8];
    int i, j, k, t;
    for (t = 1; t <= 10; t++)
    {
        int cnt = 0;
        scanf("%d", &len);
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                scanf(" %c", &arr[i][j]);
            }
        }
        limit = 8 - len;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j <= limit; j++)
            {
                for (k = 0; k < len; k++)
                    if (arr[i][j + k] != arr[i][j + len - 1 - k])
                        break;
                if (k == len)
                    cnt++;
                for (k = 0; k < len; k++)
                    if (arr[j + k][i] != arr[j + len - 1 - k][i])
                        break;
                if (k == len)
                    cnt++;
            }
        }
        printf("#%d %d\n", t, cnt);
    }
    return 0;
}
