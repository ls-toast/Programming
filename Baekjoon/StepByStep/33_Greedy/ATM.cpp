#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,i,diff;
    int arr[1000];
    int sum = 0;
    cin >> n;
    for(i = 0 ; i < n; i ++)
        cin >> arr[i];
    sort(&arr[0],&arr[n]);
    diff = arr[0];
    for(i = 1; i < n; i ++)
    {
        diff += arr[i];
        arr[i] = diff;
        sum += arr[i];
    }
    cout << sum + arr[0] << endl;
}
