#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    int i,j;
    if(n > s) {
        answer.push_back(-1);
        return answer;
    }
    
    for(i = 0 ; i < n; i ++)
        answer.push_back(s/n);
    
    int sz = answer.size();
    for(j = 1; j <= s%n; j ++) {
        answer[sz - j]++;
        if(sz - j < 0)
            j = 0;
    }
    return answer;
}
