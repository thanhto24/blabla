#include <bits/stdc++.h>

using namespace std;

int n, q, l, r, a[100005];
long long pre[100005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> a[i], pre[i] = pre[i-1] + a[i];
    while(q--)
    {
        cin >> l >> r;
        cout << pre[r] - pre[l-1] << endl;
    }
    return 0;
}