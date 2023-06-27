#include <bits/stdc++.h>

using namespace std;

int n, k;
long long res = 0;
map <int, int> mp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    for(auto x: mp)
    {
        if(x.second==k)
            res += x.first;
    }
    cout << res;
    return 0;
}