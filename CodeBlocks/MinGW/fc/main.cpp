#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e5 + 1;
vector <int> adj[maxN];

void init()
{
    for(int i = 2; i <= maxN; i++)
    {
        for(int j = i; j <= maxN; j ++)
        {
            adj[j].push_back(i);
        }

    }
}
void solve(int u, int k)
{
    if(k==1) return cout << 1 << endl, void();
    if(k>(int)(adj[u].size()+1)) return cout << -1 << endl, void();
    auto it = adj[u].begin();
    advance(it,k-1);
    cout << *it << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    init();
    int T, u, k;
    cin >> T;
    while(T--)
    {
        cin >> u >> k;
        solve(u,k);
    }
    return 0;
}
