#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> cookie) {
    int i,j;
    int answer = -1;
    vector<int> sum;
    sum.push_back(cookie.front());
    for(i = 1; i < cookie.size(); i ++)
        sum.push_back(cookie[i]+sum[i-1]);

    for(i = 1; i < sum.size()-1; i++)
    {
        int a = sum[i];
        for(j = i+1; j < sum.size(); j ++)
        {
            int b = sum[j] - a;
            if(answer > a)
                continue;
            else
                for(int k = 0; k < i; k++)
                {
                    if(a - sum[k] == b && answer < b)
                    {
                        answer = a - sum[k];
                        break;
                    }
                }
        }
    }
    if(answer < 0)
        answer = 0;
    return answer;
}
