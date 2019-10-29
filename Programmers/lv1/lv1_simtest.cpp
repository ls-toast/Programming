#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<pair<int, int> > arr;
    int arrA[5] = {1,2,3,4,5};
    int arrB[8] = {2,1,2,3,2,4,2,5};
    int arrC[10] = {3,3,1,1,2,2,4,4,5,5};
    int cnt[3] = {0,0,0};
    
    for(int i = 0 ; i < answers.size(); i ++)
    {
        if(arrA[i%5] == answers[i])
            cnt[0]++;
        if(arrB[i%8] == answers[i])
            cnt[1]++;
        if(arrC[i%10] == answers[i])
            cnt[2]++;
    }
    int mx;
    mx = max(cnt[0],max(cnt[1],cnt[2]));
    for(int i = 0 ; i < 3; i ++)
    {
        if(mx == cnt[i])
            answer.push_back(i+1);
    }
    return answer;
}
