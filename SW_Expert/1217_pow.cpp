/*
 * SW Expert Academy 1217 pow
 *
 * Difficulty : D3
 * Memory : 12,516 Kb
 * Runtime : 7ms
 *
 * URL : https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14dUIaAAUCFAYD
 * */

#include <stdio.h>
 
int result(int n, int m)
{
    if (m == 2)
        return n*n;
 
    return n * result(n, m - 1);
}
int main()
{
    int n, m;
    int t;
    for (t = 1; t <= 10; t++)
    {
        scanf("%d", &t);
        scanf("%d %d", &n, &m);
        printf("#%d %d\n", t, result(n, m));
    }
    return 0;
}
