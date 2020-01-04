#include <iostream>
using namespace std;

int n,cnt;
int col[15];

void queen(int i)
{
    int j,k;
    if(i == n)
        cnt += 1;
    else
    {
        for(j = 0 ; j < n; j ++)
        {
            bool flag=true;
            col[i] = j;
            for(k = 0 ; k < i; k ++)
            {
                if(col[k] == col[i] || abs(col[i]-col[k]) == (i-k))
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                queen(i+1);
        }
    }
}

int main()
{
    cin >> n;
    queen(0);
    cout << cnt << endl;
}
