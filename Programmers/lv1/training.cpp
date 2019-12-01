#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int i,j;
    int sz = lost.size();
    for(i = 0; i < lost.size(); i ++)
    {
        for(j = 0 ; j < reserve.size(); j ++)
        {
            if(lost[i] == reserve[j])
            {
                lost[i] = -100;
                reserve[j] = -200;
                sz --;
                break;
            }
        }
    }
    answer = n - sz;
    for(i = 0; i < lost.size(); i ++)
    {
        for(j = 0 ; j < reserve.size(); j ++)
        {
            if(lost[i]-1 == reserve[j] || lost[i]+1 == reserve[j])
            {
                reserve[j] = -1;
                answer ++;
                break;
            }
        }
    }
    return answer;
}
