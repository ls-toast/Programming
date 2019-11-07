#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int i;
    int sz = priorities.size();
    vector <pair<int,int> > arr;
    for(i = 0 ; i < sz; i ++)
        arr.push_back(make_pair(priorities[i],i));
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    for(i = 0 ; i < sz; i ++)
        if(arr[i].second == location)
            answer = i;
    return answer;
}
