#include <iostream>
using namespace std;

int main()
{
    int n,num;
    int tc;
    int i;
    char input;
    for(tc = 1 ; tc <= 10; tc ++)
    {
        cin >> n;
        int sum = 0;
        for(i = 0 ; i < n ; i ++)
        {
            cin >> input;
            if(input >= '0' && input <= '9')
                sum += input-'0';
        }
        cout << "#" << tc << " " << sum << endl;
    }
}
