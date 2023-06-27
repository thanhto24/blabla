#include <iostream>
using namespace std;

const int maxN = 1e5 + 5, MIN = -1e9;
int n, a[maxN], tree[maxN * 4];
void build(int id, int l, int r)
{
    if(l>r) return;
    if(l==r) return tree[id]=a[l],void();
    int m = ( l + r ) / 2;
    build(id*2,l,m);
    build(id*2+1,m+1,r);
    tree[id]=max(tree[id*2],tree[id*2+1]);
}
void update(int id, int l, int r, int pos, int val)
{
    if( pos < l || pos > r) return;
    if( l == r ) return tree[id]=val,void();
    int m = ( r + l ) / 2;
    update(id*2,l,m,pos,val);
    update(id*2+1,m+1,r,pos,val);
    tree[id]=max(tree[id*2],tree[id*2+1]);
}
long long getVal(int id, int l, int r, int u, int v)
{
    if( l > v || r < u ) return MIN;
    if( u <= l && r <= v ) return tree[id];
    int m = ( l + r) / 2;
    return max( getVal(id*2,l,m,u,v),getVal(id*2+1,m+1,r,u,v));
}
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    build(1,1,n);
    int T,num,a,b;
    cin >> T;
    while ( T-- )
    {
        cin >> num >> a >> b;
        if( num == 1 )
        {
            update(1,1,n,a,b);
        }
        else
            cout << getVal(1,1,n,a,b) << endl;
    }
    return 0;
}
