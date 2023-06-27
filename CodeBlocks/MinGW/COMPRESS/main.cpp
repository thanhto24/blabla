#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, T, a[10004];
    long long res;

    cin >> T;
    while(T--)
    {
        res = 0;
        cin >> n;
        for( int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a+1,a+n+1);
        for(int i = 1; i <= n; i++)
            res += upper_bound(a+1,a+n+1,a[i]) - a - 1 - i;
        cout << res << endl;
    }
}
