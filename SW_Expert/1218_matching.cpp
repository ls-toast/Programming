/*
 * SW Expert Academy 1218 Matching
 *
 * Difficulty : D4
 * Memory : 12,496 Kb
 * Run-Time : 6 ms
 *
 * URL : https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14eWb6AAkCFAYD
 */

#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
    int i, tc;
    int num;
    char input;
    for(tc = 1; tc <= 10; tc ++)
    {
        vector <char> stk;
        scanf("%d",&num);
        for(i = 0 ; i < num; i ++)
        {
            scanf(" %c",&input);
            if(!stk.empty() && input == ')') {
                if (input - 1 == stk.back()) {
                    stk.pop_back();
                    continue;
                }
            }
            if(!stk.empty() && (input-2 == stk.back())) {
                stk.pop_back();
                continue;
            }
            else
                stk.push_back(input);
        }
        if(!stk.empty())
            printf("#%d 0\n",tc);
        else
            printf("#%d 1\n",tc);
        stk.clear();
    }
}
