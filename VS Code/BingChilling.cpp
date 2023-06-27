#include <bits/stdc++.h>

using namespace std;

void solve(long long x, long long y, long long n)
{
    long long res = 0, tmp;
    tmp = (n / (x+y));
    res += tmp * x * 5;
    tmp = n - (x+y) * tmp;
    if(tmp>x)
        res += x * 5;
    else
    res += tmp * 5;
    cout << res << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, x, y, n;
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> n;
        solve(x,y,n);
    }
    return 0;
}