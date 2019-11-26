#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int i,j;
    int sz = citations.size();
    for(i = 1; i <= sz; i ++)
    {
        int cnt = 0;
        for(j = 0 ; j < sz; j ++)
            if(citations[j] >= i)
                cnt ++;
        
        if(i <= cnt)
            answer = i;
    }
    return answer;
}