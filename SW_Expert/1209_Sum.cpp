#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int arr[101][101];
 
int main()
{
    int edge = 100;
    int t, i, j, tmp;
    for(int a = 0; a < 10; a++)
    {
        memset(arr, 0, sizeof(arr));
        vector <int> sum;
        tmp = 0;
        scanf("%d", &t);
        for (i = 0; i < 100; i++)
        {
            for (j = 0; j < 100; j++)
            {
                scanf("%d", &arr[i][j]);
                if (i == j)
                    arr[edge][edge] += arr[i][j];
                arr[edge][j] += arr[i][j];
                arr[i][edge] += arr[i][j];
            }
            sum.push_back(arr[i][edge]);
            tmp += arr[i][edge - i - 1];
        }
        sum.push_back(tmp);
        for (j = 0; j <= 100; j++)
            sum.push_back(arr[edge][j]);
        sort(sum.begin(), sum.end());
        printf("#%d %d\n", t, sum.back());
        sum.clear();
    }
    return 0;
}
