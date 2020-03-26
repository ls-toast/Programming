#include <string>
#include <math.h>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int sz = 1;
    int i;
    if(s[0] =='-')
    {
        if(s.size() > 2) {
        sz = pow(10, s.size() - 2);
        for(i = 1 ; i < s.size(); i ++)
        {
            answer += (s[i]-'0') * sz;
            sz /= 10;
        }
        }
        if(s.size() == 2)
            answer = s[1]-'0';
        answer *= -1;
    }
    else if(s[0] =='+')
    {
        if(s.size() > 2) {
        sz = pow(10, s.size() - 2);
        for(i = 1 ; i < s.size(); i ++)
        {
            answer += (s[i]-'0') * sz;
            sz /= 10;
        }
        }
        if(s.size()==2)
            answer = s[1]-'0';
    }
    else if(s.size() > 1) {
        sz = pow(10, s.size() - 1);
        for(i = 0 ; i < s.size(); i ++)
        {
            answer += (s[i]-'0') * sz;
            sz /= 10;
        }
    }
    else if(s.size() == 1)
        answer = s[0]-'0';
    return answer;
}