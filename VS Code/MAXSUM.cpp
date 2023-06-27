#include <bits/stdc++.h>

using namespace std;

int n, a[100005], b[100005];
long long res = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i < n; i++)
        cin >> a[i],
        b[i] = a[i];
    b[n] = INT_MAX;
    for(int i = 1; i < n; i++)
    {
        if(b[i+1]>a[i])
            b[i+1] = a[i];
    }
    for(int i = 1; i <= n; i++)
        res += b[i];
    cout << res;
    return 0;
}