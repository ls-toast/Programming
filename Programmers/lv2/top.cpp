#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    int i,j;
    answer.push_back(0);
    for(i = 1 ; i < heights.size(); i ++)
    {
        bool chk = false;
        for(j = i; j >= 0; j --)
        {
            if(heights[j] > heights[i])
            {
                chk = true;
                answer.push_back(j+1);
                break;
            }
        }
        if(!chk)
            answer.push_back(0);
    }
    return answer;
}
