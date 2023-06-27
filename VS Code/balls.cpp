#include <bits/stdc++.h>

using namespace std;

long long a[200005], n, N, res = 0, ans[200005],dem[200005];
vector <long long> adj;
set <long long> s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
        dem[a[i]]++;
    }
    for(auto X: s)
        adj.push_back(X);
    for(int i = 0; i < adj.size(); i++)
    {
        N = dem[adj[i]];
        res += N * ( N - 1 ) / 2;
    }
    for(int i = 0; i < adj.size(); i++)
    {
        ans[adj[i]] = res - ( dem[adj[i]] - 1 );
    }
    for(int i = 1; i <= n; i++)
        cout << ans[a[i]] << endl;
    return 0;
}