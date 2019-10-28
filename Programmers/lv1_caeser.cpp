#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    int i;
    for(i = 0 ; i < s.size(); i ++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            if(s[i]+n > 'z')
                s[i] = 'a' + (s[i]+n-1)%'z';
            else
                s[i] += n;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z')
        {
            if(s[i]+n > 'Z')
                s[i] = 'A' + (s[i]+n-1)%'Z';
            else
                s[i] += n;
        }
    }
    answer = s;
    return answer;
}
