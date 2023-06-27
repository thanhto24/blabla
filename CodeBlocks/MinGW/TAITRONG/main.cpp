#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int n,m,s,t;
int res=1e8, ans=0;
int dem[100005];
bool was[100005];
vector <pair<int, int>> adj[100005];

void enter()
{
    cin >> n >> m >> s >> t;
    int x,y,z;
    for(int i=1;i<=m;i++)
    {
        cin >> x >> y >> z;
        adj[x].push_back({y,z});
        adj[y].push_back({x,z});
        dem[x]++;
    }
    memset(was,false,sizeof(was));
}
void dfs(int s)
{
    was[s]=true;
    int uu, duu;
    for(auto x:adj[s])
    {
        int k=0;
        if(was[x.first]!=true||x.first==t||dem[uu]>0)
        {
            dem[uu]--;
            uu=x.first;
            duu=x.second;
            res=min(res,duu);
            if(x.first==t) was[t]=true, ans=max(res,ans), res=1e8, k=1;
            if(k==0)
            dfs(uu);
        }
    }
}
void solve()
{
    dfs(s);
    if(was[t]==true) cout << ans;
    else cout << "-1";
}
int main()
{
    enter();
    solve();
    return 0;
}
