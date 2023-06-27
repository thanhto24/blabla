#include <iostream>

using namespace std;

const int N=1e5+5;
int n,T;
int a[N], tree[4*N];
void buildtree(int x, int l, int r)
{
    if(l==r)
    {
        tree[x]=a[l];
        return;
    }
    int m=(r+l)/2;
    buildtree(x*2,l,m);
    buildtree(x*2+1,m+1,r);

    tree[x]=min(tree[x*2],tree[x*2+1]);
}
int getval(int x, int l, int r, int u, int v)
{
    if(u>r||v<l) return INT_MAX;
    if(u<=l&&v>=r) return tree[x];
    if(l==r) return tree[x];
    int m=(l+r)/2;
    return min(getval(x*2,l,m,u,v),getval(x*2+1,m+1,r,u,v));
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> T;
    for(int i=1;i<=n;i++) cin >> a[i];
    buildtree(1,1,n);
    int L,R;
    while(T--)
    {
        cin >> L >> R;
        cout << getval(1,1,n,L,R);
        cout << endl;
    }
    return 0;
}
