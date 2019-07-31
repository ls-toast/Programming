#include <stdio.h>

int n;
int b[1000];

int chkRight(int idx, int max)
{
    int i = 1;
    if (b[idx + 2] > b[idx])
        return 0;
    else{
        if(b[idx+2] > max)
            max = b[idx+2];
        return b[idx] - max;
    }
}
int chkLeft(int idx, int max)
{
    int i = -1;
    if (b[idx - 2] > b[idx])
        return 0;
    else
    {
        if(b[idx-2] > max)
            max = b[idx-2];
        return b[idx]-max;
    }
}
int chkView()
{
    int i;
    int cnt = 0;
    int max = 0;
    int left, right;
    for(i = 0 ; i < n; i ++)
    {
        if(i == 0)
        {
            if(b[i]-b[i+1] >= 2 && b[i]-b[i+2] >= 2)
            {
                if(b[i+1] > b[i+2])
                    cnt += b[i] - b[i+1];
                else
                    cnt += b[i] - b[i+2];
            }
        }
        if(i == n-1)
        {
            if(b[i]-b[i-1] >= 2 && b[i]-b[i-2] >= 2)
            {
                if(b[i-1] > b[i-2])
                    cnt += b[i] - b[i-1];
                else
                    cnt += b[i] - b[i-2];
            }
        }
        else if(i != 0 && i != n-1)
        {
            if(b[i-1] < b[i] && b[i+1] < b[i])
            {
                if(b[i-1] > b[i+1])
                    max = b[i-1];
                else
                    max = b[i+1];

                left = chkLeft(i,max);
                right = chkRight(i,max);
                if (right && left)
                {
                    if(right > left)
                        cnt += left;
                    else
                        cnt += right;
                }
            }
        }
    }
    return cnt;
}
int main()
{
    int i;
    for(i = 1; i <= 10; i ++)
    {
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
            scanf("%d",&b[j]);
        printf("#%d %d\n",i,chkView());
    }
}