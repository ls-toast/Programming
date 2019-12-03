#include <iostream>
using namespace std;
int main()
{
    int n,k;
    int arr[10];
    int i,cnt=0;
    cin >> n >> k;
    for(i = 0 ; i < n ; i ++)
        cin >> arr[i];

    for(i = n-1; i >= 0; i --)
        if(arr[i] <= k)
        {
            cnt += k/arr[i];
            k = k % arr[i];
        }
    cout << cnt << endl;
}
