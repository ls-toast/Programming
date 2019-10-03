#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    int i,j;
    if(s < 2) {
        answer.push_back(-1);
        return answer;
    }
    for(i = 0 ; i < n; i ++)
        answer.push_back(s/n);
    int sz = answer.size();
    for(j = 1; j <= s%n; j ++) {
        if(sz - j < 0)
            j = 1;
        answer[sz - j]++;
    }
    return answer;
}

int main()
{
    int n, s;
    vector<int> ans;
    cin >> n >> s;
    ans = solution(n,s);
    for(int i = 0 ; i < ans.size(); i ++)
        cout << ans[i] << " ";
    cout << endl;
}
