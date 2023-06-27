#include <bits/stdc++.h>

using namespace std;

long long a[200002], n, N, cnt = 0;
long long pre[200002], tree[200002 * 4];

void buildtree(int id, int l, int r)
{
    if(l > r)
        return;
    if(l==r)
        return tree[id] = pre[l], void();
    int m = ( l + r ) / 2;
    buildtree(id*2,l,m);
    buildtree(id*2+1,m+1,r);
    tree[id] = min(tree[id*2],tree[id*2+1]);
}

long long getVal(int id, int l, int r, int u, int v)
{
    if( v < l || u > r )
        return LONG_LONG_MAX;
    if( u <= l && r <= v )
        return tree[id];
    int m = ( l + r ) / 2;
    return min(getVal(id*2,l,m,u,v),getVal(id*2+1,m+1,r,u,v));
}

bool check(int I)
{
    if(a[I]<=0)
        return false;
    long long tmp = getVal(1,1,N,I,n+I-1);
    if( tmp - pre[I-1] <= 0)
        return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i+n] = a[i];
    }
    pre[0] = 0;
    for(int i = 1; i <= 2 * n; i++)
    {
        pre[i] = pre[i-1] + a[i];
    }

    N = 2 * n;

    // for(int i = 1; i <= N; i++ )
    //     cout << pre[i] << " ";
    buildtree(1,1,N);

    for(int i = 1; i <= n; i++)
    {
        if(check(i))
            cnt++;
    }
    cout << cnt;
    return 0;
}