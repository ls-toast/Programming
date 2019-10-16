/*
 * SW Expert Academy 1225 Cypher Generator
 *
 * Memory : 12,636Kb
 * RunTime : 20ms
 *
 * URL : https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14uWl6AF0CFAYD
 * */

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int tc;
    int i,j,k;
    for(i = 1 ; i <= 10; i ++)
    {
        cin >> tc;
        queue <int> Q;
        for(j = 0 ; j < 8; j ++)
        {
            int num;
            cin >> num;
            Q.push(num);
        }
        while(Q.back() != 0)
        {
            for(j = 1; j <= 5; j ++)
            {
                int front;
                front = Q.front();
                Q.pop();
                front -= j;
                if(front <= 0)
                    front = 0;
                Q.push(front);
                if(Q.back() == 0)
                    break;
            }
        }
        cout << "#" << i;
        for(j = 0 ; j < 8; j ++) {
            cout << " " << Q.front();
            Q.pop();
        }
        cout << endl;
    }
}
