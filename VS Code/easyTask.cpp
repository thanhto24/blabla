#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e6 + 6;

int n, a[maxN], MX = INT_MIN;
long long mn = 2e18, mx = -2e18;
bool prime[maxN];
long long pre[maxN], res = -2e18;
vector <long long> adj, tmp;

void sieve(int N)
{
    memset(prime,true,sizeof(prime));
    prime[0] = prime[1] = false;
    for(int i = 2; i * i <= N; i++)
        if(prime[i])
            for(int j = i * i; j <= N; j += i)
                prime[j] = false;
}
int main()
{
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    sieve(n);
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(prime[i])
            MX = max(MX, a[i]);
    }
    pre[1] = 0;
    tmp.push_back(0);
    for(int i = 2; i <= n; i++)
    {
        pre[i] = pre[i-1] + a[i];
        if(prime[i])
            adj.push_back(pre[i]);
        if(prime[i+1])
            tmp.push_back(pre[i]);
    }
    for(int i = 0; i < adj.size(); i++)
    {
        // cout << adj[i] << " ";
        res = max(res, adj[i]);
        mn = min(mn, tmp[i-1]);
        res = max(res, adj[i] - mn);
        // cout << res << endl;
    }

    if(res>MX)
    cout << res;
    else
    cout << MX;

    return 0;
}