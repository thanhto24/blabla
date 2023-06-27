#include <bits/stdc++.h>
#define el cout << endl
using namespace std;

void solve(long long n, long long s)
{
    long long tmp;
    tmp = n * (n + 1) / 2;
    tmp -= s;
    if (tmp & 1)
        return void(cout << "NO");
    tmp /= 2;
    if (tmp <= n * (n + 1) / 2 && tmp >= 0)
        cout << "YES";
    else
        cout << "NO";
    return;
}

int main()
{
    cin.tie(0) -> sync_with_stdio(0);
    long long T, n, s;

    cin >> T;
    while (T--)
    {
        cin >> n >> s;
        solve(n, s);
        el;
    }
    return 0;
}