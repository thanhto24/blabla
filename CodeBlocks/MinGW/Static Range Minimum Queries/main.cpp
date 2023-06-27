#include <iostream>

using namespace std;
const int MIN=-1e9+5;
const int MAX=1e9+9;
const int maxN=2e5+5;
int n,Q;
int a[maxN],lazy[maxN*4];
long long tree[4*maxN];
void buildtree(int id,int l,int r)
{
    if(l==r)
        return tree[id]=a[l], void();
    if(l>r) return;
    int m=(l+r)/2;
    buildtree(id*2,l,m);
    buildtree(id*2+1,m+1,r);
    tree[id]= max(tree[id*2],tree[id*2+1]);
}
int getval(int id,int l, int r, int p)
{
    if(l>p||r<p) return MIN;
    if(l==r) return tree[id]+lazy[id];
    int m=(r+l)/2;
    return max(getval(id*2,l,m,p),getval(id*2+1,m+1,r,p))+lazy[id];
}
void update(int id,int l, int r, int u, int v, int val)
{
    if(l>v||r<u) return;
    if(l>=u&&r<=v)
       {
           tree[id]+=val;
           lazy[id]+=val;
           return;
       }
    int m=(r+l)/2;
    update(id*2,l,m,u,v,val);
    update(id*2+1,m+1,r,u,v,val);
    tree[id]=max(tree[id*2],tree[id*2+1])+lazy[id];
}

int main()
{
    cin >> n >> Q;
    for(int i=1;i<=n;i++) cin >> a[i];
    buildtree(1,1,n);
    int l,r,val,pos;
    while(Q--)
    {
       int x;
       cin >> x;
       if(x==1)
       {
           cin >> l >> r >> val;
           update(1,1,n,l,r,val);
       }
       else
       {
           cin >> pos;
           cout << getval(1,1,n,pos) << endl;
       }
    }
    return 0;
}
