#include <bits/stdc++.h>

using namespace std;

const int maxN = 2e5 + 5;

int n, m, a[maxN], b[maxN], UCLN, res[maxN];

int solve(int x)
{
    int tmp;
    for(int i = 1; i <= n; i++)
    {
        if(i==1) tmp = a[i] + x;
        tmp = __gcd(tmp, a[i] + x);
    }
    return tmp;
}
void init()
{
    for(int i = 0; i < UCLN; i++)
    {
        res[i] = solve(i);
    }
}
void giai(int x)
{
    int ans;
    int pos = x % UCLN;
    if(UCLN==1) pos = x;
    if(UCLN==1)
    {
        for(int i = 1; i <= n; i++)
        {
            if(i==1) ans = a[i] + x;
        ans = __gcd(ans, a[i] + x);
        if(ans == 1) return cout << 1 << " ", void();
        }
        return cout << 1 + x << " ", void();
    }
    cout << res[pos] << " ";

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(i==1) UCLN = a[i];
        UCLN = __gcd(UCLN,a[i]);
    }
    init();
    for(int i = 1; i <= m; i++)
        cin >> b[i];
    for(int i = 1; i <= m; i++)
    {
        giai(b[i]);
    }
    return 0;
}
