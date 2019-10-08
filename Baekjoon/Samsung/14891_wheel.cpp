//http://boj.kr/b3164c4fac5945f3ad005b19c0181ec5

#include <iostream>
#include <math.h>
#include <queue>
using namespace std;

deque <int> dq[4];

void rotate(int idx, int dir, int widx) {
    int left = dq[idx][6];
    int right = dq[idx][2];

    if(idx<0 || idx>3) return;

    if (dir == 1) {
        dq[idx].push_front(dq[idx].back());
        dq[idx].pop_back();
    } else {
        dq[idx].push_back(dq[idx].front());
        dq[idx].pop_front();
    }

    if (idx > 0 && widx <= 0) {
        if (dq[idx - 1][2] != left)
            rotate(idx - 1, -dir, -1);
    } else if (idx < 3 && widx >= 0)
        if (dq[idx + 1][6] != right)
            rotate(idx + 1, -dir, 1);
}
int main()
{
    ios::sync_with_stdio(false);
    int i,j;
    string input;
    for(i = 0 ; i < 4; i++)
    {
        cin >> input;
        for(j = 0; j < 8; j ++)
            dq[i].push_back(input[j]-'0');
    }

    int n, idx, dir;
    cin >> n;
    while(n--)
    {
        cin >> idx >> dir;
        rotate(idx-1, dir, 0);
    }
    int sum = 0;
    for(i = 0; i < 4; i ++)
    {
        if(dq[i].front()==1)
            sum += pow(2,i);
    }
    cout << sum << endl;
}
