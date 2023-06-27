#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    while(true)
    {
        vector <int> a(12);
        int inp;

        for(int i = 0; i < 12; i++)
            cin >> inp,
            a[i] = inp;

        if(!a.back())
            return 0;

        sort(a.begin(), a.end());

        if((a[0]==a[3])&&(a[4]==a[7])&&(a[8]==a[11]))
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}