#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e6 + 5;
const int MAXX = 1e9 + 9;
int m, n, k, a[maxN], b[maxN], leaf[maxN], tree[maxN * 4], l, r, sizee = 1;

void init()
{
    for(int i = 1; i <= m; i++)
    {
        r = lower_bound( b + 1, b + n + 1, a[i] ) - b;
        l = r - 1;
        leaf[sizee++]=(min(abs(a[i]-b[r]),abs(a[i]-b[l])));
    }
}
void buildTree(int id, int l, int r)
{
    if(l==r)    return tree[id] = leaf[l], void();
    if(l>r)     return;
    int m = ( l + r ) / 2;
    buildTree(id*2,l,m);
    buildTree(id*2+1,m+1,r);
    tree[id] = min(tree[id*2],tree[id*2+1]);
}
int getVal(int id, int l, int r, int u, int v)
{
    if( v < l || u > r ) return MAXX;
    if( l >= u && r <= v )  return tree[id];
    int m = ( l + r ) / 2;
    return min(getVal(id*2,l,m,u,v),getVal(id*2+1,m+1,r,u,v));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m >> n >> k;
    for(int i = 1; i <= m; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];
    sort( b + 1, b + n + 1 );
    b[0] = 1e9 + 1;
    init();
    buildTree(1,1,m);
    while(k--)
    {
        cin >> l >> r;
        cout << getVal(1,1,m,l,r) << endl;
    }
    return 0;
}