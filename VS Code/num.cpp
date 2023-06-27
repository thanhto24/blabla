#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> st[i] >> ed[i];
        mn = min(st[i], mn);
        mx = max(ed[i], mx);
    }
    for(int x = mn; x <= mx; x++)
    {
        for(int i = 1; i <= n; i++)
        {
            if(st[i]<=x&&ed[i]>=x)
                was[i] = true
        }
    }
    return 0;
}