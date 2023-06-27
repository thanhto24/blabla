#include <bits/stdc++.h>

using namespace std;

int n, k, mn, pos, l = 0, r, x, res;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    mn = k;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        if(x<=mn)
        {
            mn = x;
            pos = i;
        }
    }
    if(pos==1||pos==n)
    {
        res = ceil(n*1.0/k);
        res += n / k - 1;
        return cout << res, 0;
    }
    pos = min(pos, n - pos + 1);
    if(pos<=k)
    {
        res = 1;
        l = k;
    }
    else
    {
        res = ceil(pos*1.0/k);
        res += pos / k - 1;
        l = k + ( res - 1 ) * ( k -1 );
    }
    res += ceil((n-l+1)*1.0/k);
    res += (n-l+1) / k - 1;
    cout << res;
    return 0;
}