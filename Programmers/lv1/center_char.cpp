#include <string>
#include <cstring>
#include <vector>

using namespace std;

string solution(string s) {
    int sz = s.size();
    string answer = "";
    if(sz % 2 == 0)
    {
        answer = s[sz/2-1];
        answer += s[sz/2];
    }
    else
        answer = s[sz/2];
    return answer;
}