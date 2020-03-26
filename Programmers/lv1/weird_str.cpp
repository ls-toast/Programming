#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int i;
    int cnt = 0;
    string answer = "";
    for( i = 1 ; i <= s.size(); i ++)
    {
        if(s[i-1]==' ')
        {
            cnt = 0;
            answer += ' ';
            continue;
        }
        if(cnt%2==0)
            answer += toupper(s[i-1]);
        else
            answer += tolower(s[i-1]);
        cnt ++;
    }
    return answer;
}
