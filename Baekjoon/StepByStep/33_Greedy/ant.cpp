#include <iostream>
using namespace std;

int main()
{
    int t,l,n,ant,i;
    cin >> t;
    while(t--)
    {
        int max = 0;
        int min_max = 0;
        cin >> l >> n;
        for(i = 0 ; i < n; i ++)
        {
            cin >> ant;
            if(l - ant > max)
                max = l - ant;
            if(ant > max)
                max = ant;
            if(ant <= l - ant)
                if(min_max <= ant)
                    min_max = ant;
            if(l - ant <= ant)
                if(min_max <= l-ant)
                    min_max = l-ant;
        }
        cout << min_max << " " << max << endl;
    }
}
