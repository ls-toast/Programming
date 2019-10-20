#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tc, n, i;
    string input;

    for(tc = 0; tc < 10; tc ++)
    {
        vector <char> arr;
        cin >> n;
        cin >> input;
        int pnt = 1;
        arr.push_back(input[0]);
        while(pnt < n)
        {
            char origin;
            origin = arr.back();
            if(origin != input[pnt])
                arr.push_back(input[pnt]);
            else
                arr.pop_back();
            pnt ++;
        }
        cout << "#" << tc+1 << " ";
        for(i = 0 ; i < arr.size(); i ++)
            cout << arr[i];
        cout << endl;
    }
    return 0;
}
