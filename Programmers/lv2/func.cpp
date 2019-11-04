#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    deque<int> list;
    int i;
    int idx = 0;
    int tot = 0;
    int sz = progresses.size();
    for(i = 0 ; i < sz; i ++)
        list.push_back(progresses[i]);
    while(tot!=sz)
    {
        bool flag = false;
        int cnt = 0;
        for(i = 0 ; i < sz; i ++)
            list[i] += speeds[i];
        while(list[idx] >= 100)
        {
            idx++;
            cnt ++;
            flag = true;
        }
        if(flag)
        {
            tot += cnt;
            answer.push_back(cnt);
        }
    }
    return answer;
}
