#define ii pair <int, int>
#define mx first
#define mn second

#include <bits/stdc++.h>


using namespace std;

const int maxN = 1e5 + 5;
int n, q, a[maxN];
ii tree[ 4 * maxN ];

void buildTree(int id, int l, int r)
{
    if( l > r ) return;
    if( l == r )
    {
        tree[id].mx = tree[id].mn = a[l];
        return;
    }
    int m = ( l + r ) / 2;
    buildTree(id*2, l, m);
    buildTree(id*2+1, m + 1, r);
    tree[id].mx = max(tree[id*2].mx,tree[id*2+1].mx);
    tree[id].mn = min(tree[id*2].mn,tree[id*2+1].mn);

}

ii getVal(int id, int l, int r, int u, int v)
{
    if( v < l || u > r ) return {INT_MIN,INT_MAX};
    if( u <= l && r <= v )
    {
        return tree[id];
    }
    int m = ( l + r ) / 2;
    ii t1 = getVal(id*2,l,m,u,v);
    ii t2 = getVal(id*2+1,m+1,r,u,v);
    return make_pair(max(t1.mx,t2.mx),min(t1.mn,t2.mn));
}
int main()
{
    cin >> n >> q;
    for(int i = 1; i <= n; i++) cin >> a[i];
    buildTree(1,1,n);
    int l, r;
    ii kq;
    while(q--)
    {
        cin >> l >> r;
        kq = getVal(1,1,n,l,r);
//        cout << kq.mx << "     " << kq.mn << endl;
        if(kq.mx-kq.mn!=r-l) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
