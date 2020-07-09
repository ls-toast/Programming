#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pcnt = 0;
    int ycnt = 0;
    for(int i = 0 ; i < s.size(); i ++)
    {
        if(s[i] == 'p' || s[i] == 'P')
            pcnt++;
        if(s[i] == 'y' || s[i] == 'Y')
            ycnt++;
    }
    if(pcnt != ycnt)
        answer = false;
    return answer;
}