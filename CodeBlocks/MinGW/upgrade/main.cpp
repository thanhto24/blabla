#include <bits/stdc++.h>

using namespace std;

map <long long, long long> mp;
long long X, n, k, res = 0, pre = 0, x, mx = -1;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    for(long long i = 1; i <= n; i++)
    {
        cin >> X;
        mx = max(mx, X);
        mp[X]++;
    }
    for(auto it = mp.begin(); it !=mp.end(); it++)
    {
        if( it -> first == x )
            mp[x] += pre;
        res += ( it -> second ) % k;
        x = (it -> first);
        if(( it -> second ) >= k)
        x++ ;
        if(x>mx) mp[x] += ( it -> second ) / k;
        pre = (it -> second) / k;
    }
    cout << res;
    return 0;
}
