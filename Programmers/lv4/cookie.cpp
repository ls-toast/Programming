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

    for(i = 0; i < sum.size()-1; i++)
    {
        int a = sum[i];
        int b = 0;
        if(i > 0)
            for(j = 0; j < i-1; j ++)
                a -= cookie[j];
        for(j = i+1; j < cookie.size(); j ++)
        {
            b += cookie[j];
            if(a == b && answer < a)
            {
                answer = a;
                break;
            }
            else if(b > a)
                break;
        }
    }
    if(answer < 0)
        answer = 0;
    return answer;
}
