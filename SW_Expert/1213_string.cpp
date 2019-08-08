/*
 * SW Expert Academy 1213 String
 * 
 * Memory : 12,488 Kb
 * Runtime : 6ms
 *
 * URL : https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14P0c6AAUCFAYi*/

#include <stdio.h>
#include <cstring>

int main()
{
    char str[1000];
    char input[10];
    int t, tc;
    for (tc = 1; tc <= 10; tc++)
    {
        int cnt = 0;
        char* ptr;
        scanf("%d", &t);
        scanf("%s", &input);
        scanf("%s", &str);
        ptr = strstr(str, input);
        while (ptr != NULL)
        {
            cnt++;
            ptr = strstr(ptr+1, input);
        }
        printf("#%d %d\n", tc, cnt);
    }
}
