#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    vector<int> tmp;
    int i,j;
    for(i = 0 ; i < heights.size(); i ++)
    {
        if(tmp.empty())
        {
            tmp.push_back(heights[i]);
            answer.push_back(0);
        }
        else
        {
            bool chk = false;
            for(j = tmp.size()-1; j >= 0; j --)
            {
                if(tmp[j] > heights[i])
                {
                    chk = true;
                    answer.push_back(j+1);
                    break;
                }
            }
            if(!chk)
                answer.push_back(0);
            tmp.push_back(heights[i]);
        }
    }
    return answer;
}
