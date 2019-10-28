#include <string>
#include <vector>

using namespace std;

int arr[100000];
int solution(int n) {
    int answer = 0;
    if(n == 0 || n == 1)
        return n;
    else if(arr[n] == 0)
        arr[n] = (solution(n-1) + solution(n-2)) % 1234567;
    answer = arr[n];
    return answer;
}
