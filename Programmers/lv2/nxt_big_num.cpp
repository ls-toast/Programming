#include <string>
#include <vector>

using namespace std;

int getCount(int num)
{
    int res = 0;
    int i;
    while(num > 0)
    {
        if(num % 2)
            res ++;
        num /= 2;
    }
    return res;
}
int solution(int n) {
    int answer = 0;
    bool flag = true;
    int o_cnt, n_cnt;
    o_cnt = getCount(n);
    while(flag)
    {
        n++;
        n_cnt = getCount(n);
        if(o_cnt == n_cnt)
            flag = false;
    }
    answer = n;
    return answer;
}