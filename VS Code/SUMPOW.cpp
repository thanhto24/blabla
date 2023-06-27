#include <bits/stdc++.h>

using namespace std;

int n, a[300005];
long long res = 0, pre[300005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i], pre[i] = pre[i-1] + a[i];
    for(int i = 1; i <= n; i++)
    {
        res += (pre[n] - pre[i]) * a[i];
    }
    cout << res;
    return 0;
}