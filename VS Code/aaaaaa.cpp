#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll snt[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
ll a[55], n;
set<ll> adj;

void enter()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}
void Try(int I, ll tmp)
{
    if (I > 14)
        return;
    adj.insert(tmp);
    for (int i = I + 1; i < 15; i++)
    {
        Try(i, tmp * snt[i]);
    }
}

void init()
{
    for (int i = 0; i < 15; i++)
    {
        Try(i, snt[i]);
    }
}

bool check(ll x)
{
    for (int i = 1; i <= n; i++)
        if (__gcd(a[i], x) == 1)
            return false;
    return true;
}

void solve()
{
    for (auto x : adj)
    {
        if (check(x))
            return void(cout << x);
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    enter();
    init();
    solve();
    return 0;
}
