#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string sym;
    string input;
    int t;
    int n;
    int i,j;
    vector <pair<int,string> > arr;
    cin >> t;
    for(i = 1 ; i <= t; i ++)
    {
        cin >> sym  >> n;
        for(j = 0 ; j < n ; j ++)
        {
            cin >> input;
            if(input == "ZRO")
                arr.push_back(make_pair(0,"ZRO"));
            else if(input == "ONE")
                arr.push_back(make_pair(1,"ONE"));
            else if(input == "TWO")
                arr.push_back(make_pair(2,"TWO"));
            else if(input == "THR")
                arr.push_back(make_pair(3,"THR"));
            else if(input == "FOR")
                arr.push_back(make_pair(4,"FOR"));
            else if(input == "FIV")
                arr.push_back(make_pair(5,"FIV"));
            else if(input == "SIX")
                arr.push_back(make_pair(6,"SIX"));
            else if(input == "SVN")
                arr.push_back(make_pair(7,"SVN"));
            else if(input == "EGT")
                arr.push_back(make_pair(8,"EGT"));
            else if(input == "NIN")
                arr.push_back(make_pair(9,"NIN"));
        }
        sort(arr.begin(), arr.end());
        cout << "#" << i << " ";
        for(j = 0 ; j < arr.size(); j ++)
            cout << arr[j].second << " ";
        cout << endl;
        arr.clear();
    }
}
