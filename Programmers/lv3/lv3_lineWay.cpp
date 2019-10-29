#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(int n, long long k) {
    vector<int> answer;
    vector<int> tmp;
    int i;
    int cnt = 0;
    for(i = 1; i <= n; i++)
        tmp.push_back(i);
    do{
        cnt ++;
        if(cnt == k)
            for(i = 0; i < n; i ++)
                answer.push_back(tmp[i]);
    }while(next_permutation(tmp.begin(), tmp.end()));
    return answer;
}
