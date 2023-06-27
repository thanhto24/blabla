#include <bits/stdc++.h>

using namespace std;

int n, k, t, inp;

void Endl()
{
    cout << endl;
    return;
}

void solve()
{
    cin >> n >> k;

    int amount = n, res = 1;
    map <int, int> mp;

    for(int i = 1; i <= n; i++)
        cin >> inp, mp[inp]++;

    if(n==k)
        return cout << 1, void();

    map <int, int>::iterator it;
    for(it = mp.begin(); it != mp.end(); it++)
    {
        amount -= it->second;
        res = it->first; 
        res++;
        if(amount <= k)
        {
            if(amount==0)
                return cout << -1, void();
                return cout << res, void();
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)
    {
        solve();
        Endl();
    }
    return 0;
}