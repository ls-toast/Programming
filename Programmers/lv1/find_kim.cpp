#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int idx;
    int i;
    for(i = 0 ; i < seoul.size(); i ++)
    {
        if(seoul[i] == "Kim")
        {
            idx = i;
            break;
        }
    }
    answer = "김서방은 ";
    if(idx >= 100)
    {
        answer += '0' + idx/100;
        if(idx % 100 == 0)
            answer += '0';
        idx %= 100;
    }
    if(idx >= 10)
        answer += '0' + idx/10;
    answer += '0' + idx%10;
    answer +="에 있다";
    return answer;
}