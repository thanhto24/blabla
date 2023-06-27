#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

#define ii pair <int, int>
#define mp make_pair
using namespace std;

int n,m;
int a[100005], b[100005], f[100005];
vector <ii> adj;

bool cmp( ii a, ii b)
{
    return a.second<b.second;
}
void enter()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        a[i]=i;
        adj.push_back(mp(a[i],i));
    }
    m*=-1;
    for(int i=-1;i>=m;i--)
        {
            cin >>b[i];
            adj.push_back(mp(b[i],i));
        }

}
void solve()
{
    sort(adj.begin(),adj.end(),cmp);
    memset(f,0,sizeof(f));
    for(auto x:adj)
    {
        f[x.first]++;
        if(f[x.first]==1)
        cout << x.first << " ";
    }
}

int main()
{
    enter();
    solve();
    return 0;
}
