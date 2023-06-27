#include <bits/stdc++.h>
#define ii pair<long long, long long>
#define s second
#define f first

using namespace std;

using ll=long long;
const long long oo=1e18+1;

int n,m;
bool was[100005];
vector <ii> adj[100005];
long long d[100005];

struct cmp{
    bool operator() (ii a, ii b) {return a.s>b.s;}
};
void enter()
{
    cin >> n >> m;
    long long x, y, w;
    for(int i=1;i<=m;i++)
    {
        cin >> x >> y >> w;
        adj[x].push_back({y,w});
    }
}

void dijkstra( int u)
{
    priority_queue<ii,vector<ii>,cmp> Q;
    for(int i=1;i<=n;i++) d[i]=oo, was[i]=false;
    d[u]=0;
    Q.push({u,0});
    was[u]=true;
    while(!Q.empty())
    {
        while(!Q.empty()&&was[Q.top().f]==true) Q.pop();
        long long du, mn, v, uu;
        mn=Q.top().s;
        v=Q.top().f;
        was[v]=true;
        for(auto x: adj[v])
        {
            uu=x.f;
            if(was[uu]==false)
           {
               du=x.s;
                if(mn+du<d[uu])
            {
                d[uu]=du+mn;
                Q.push({uu, d[uu]});
            }
           }
        }

    }
}
void solve()
{
    dijkstra(1);
    for(int i=1;i<=n;i++)
        cout << d[i] << " ";
}
int main()
{
    enter();
    solve();
    return 0;
}
