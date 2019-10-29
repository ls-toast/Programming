#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    int i,j;
    int sz = phone_book.size();
    sort(phone_book.begin(),phone_book.end());
    for(i = 0 ; i < sz-1; i ++)
    {
        if(phone_book[i] == phone_book[i+1].substr(0,phone_book[i].size()))
        {
            answer = false;
            break;
        }
    }
    return answer;
}
