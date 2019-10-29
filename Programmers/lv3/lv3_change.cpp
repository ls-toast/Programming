#include <iostream>
#include <string>
#include <vector>

using namespace std;

int dp[1000001];
int solution(int n, vector<int> money) {
    int answer = 0;
    int i,j;
    dp[0] = 1;
    for(i = 1; i <= n; i ++)
    {
        if(i % money[0] == 0)
            dp[i] = 1;
    }
    for(i = 1; i < money.size(); i ++)
    {
        for(j = money[i]; j <= n; j ++)
        {
            dp[j] += dp[j - money[i]];
        }
    }
    answer = dp[n] % 1000000007;
    return answer;
}

int main()
{
    int n;
    vector <int> arr;
    cin >> n;
    arr.emplace_back(2);
    arr.emplace_back(3);
    arr.emplace_back(5);
    cout << solution(n, arr) << endl;
}
