#include <bits/stdc++.h>

using namespace std;

int n, q, a[1000006], tmp, dem, c, k;
long long pre[1000006];
long long res = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a+1,a+n+1);
    for(int i = 1; i <= n; i++)
        pre[i] = pre[i-1] + a[i];
    while(q--)
    {
        cin >> c >> k;
        res = pre[n] - pre[n-c];
        tmp = c / ( k + 1 );
        dem = n;
        while(tmp--)
        {
            res += a[dem--];
        }
        cout << res << endl;
    }
    return 0;
}