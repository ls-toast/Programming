/*
 * SW Expert Academy 1228 Cipher1
 *
 * Memory : 12,524Kb
 * RunTime : 7ms
 *
 * URL : https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AV14w-rKAHACFAYD
 * */

#include <iostream>
#include <list>
using namespace std;

int main()
{
    int n,i,j,tc;
    for(tc = 1; tc <= 10; tc ++)
    {
        list <int> origin;
        list <int> add;
        list <int> ::iterator pnt;
        int num;
        char com;
        int ncom,x,y;
        cin >> n;
        for(i = 0 ; i < n; i ++)
        {
            cin >> num;
            origin.push_back(num);
        }
        cin >> ncom;
        for(i = 0 ; i < ncom; i ++)
        {
            cin >> com;
            cin >> x >> y;
            pnt = origin.begin();
            for(j = 0 ; j < x; j ++)
                pnt ++;
            for(j = 0 ; j < y; j ++) {
                cin >> num;
                add.push_back(num);
            }
            origin.splice(pnt,add);
        }

        cout << "#" << tc << " ";
        for(i = 0 ; i < 10; i++)
        {
            cout << origin.front() << " ";
            origin.pop_front();
        }
        cout << endl;
    }
}
