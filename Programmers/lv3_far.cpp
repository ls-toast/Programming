#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    int arr[2001] = {0,1,2,};
    if(n == 1 || n == 2)
        answer = n;
    else
    {
        for(int i = 3 ; i <= n; i ++ )
        {
            arr[i] += arr[i-1] + arr[i-2];
        }
    }
    answer = arr[n];
    return answer;
}
