#include <bits/stdc++.h>

using namespace std;

int a, n;
long long res = 0;
map <int, int> mp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        mp[a]++;
    }
    for (auto x : mp)
    {
        if (x.second == 1)
            return cout << -1, 0;
        res += (x.second / 3);
        if (x.second % 3 != 0)
            res++;
    }
    cout << res;
    return 0;
}