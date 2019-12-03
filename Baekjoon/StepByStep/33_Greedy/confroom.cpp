#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,st,et;
    int i,j;
    int cnt = 1;
    vector <pair<int,int>> list;

    cin >> n;
    for(i = 0 ; i < n ; i ++)
    {
        cin >> st >> et;
        list.push_back(pair<int,int>(et,st));
    }
    sort(list.begin(), list.end());
    et = list[0].first;
    for(j = 1 ; j < list.size(); j ++)
    {
        if(list[j].second >= et)
        {
            cnt ++;
            et = list[j].first;
        }
    }
    cout << cnt << endl;
}
