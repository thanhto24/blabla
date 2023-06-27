#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e9 + 7;
long long n, a[100005], tmp1 = 0, tmp2 = 0, res = 0, P, S;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        tmp1 += a[i];
    S = tmp1;
    tmp1 *= tmp1;
    for (int i = 1; i <= n; i++)
        tmp2 += a[i] * a[i];
    P = tmp1 - tmp2;
    P /= 2;
    for (int i = 1; i <= n; i++)
    {
        res += a[i] * P - a[i] * a[i] * (S - a[i]);
        res %= maxN;
    }
    cout << res / 3;
    return 0;
}