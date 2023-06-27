#include <iostream>

using namespace std;
int const maxN=1e5+5;
int n,m;
int a[maxN], tree[maxN*4], lazy[maxN*4];
bool was[maxN*4];
void buildtree(int id,int l,int r)
{
    if(l>r) return;
    was[id]=true;
    if(l==r)
        return tree[id]=a[l], void();
    int m=(l+r)/2;
    buildtree(id*2,l,m);
    buildtree(id*2+1,m+1,r);
    tree[id]= max(tree[id*2],tree[id*2+1]);
}
void checkAndUp(int id)
{
    if(was[id]) return;
    tree[id*2]=tree[id];
    was[id*2]=false;
    tree[id*2+1]=tree[id];
    was[id*2+1]=false;
    was[id]=true;
    return;
}
void update(int id,int l, int r, int u, int v, int val)
{
    if(v<l||u>r) return;
    checkAndUp(id);
    if(u<=l&&r<=v)
    {
        tree[id]=val;
        was[id]=false;
        return;
    }
    int m=(r+l)/2;
    update(id*2,l,m,u,v,val);
    update(id*2+1,m+1,r,u,v,val);
    tree[id]=max(tree[id*2],tree[id*2+1]);
}
int getval(int id,int l, int r, int u, int v)
{
    if(l>v||r<u) return INT_MIN;
    if(u<=l&&r<=v) return tree[id];
    int m=(r+l)/2;
    return max(getval(id*2,l,m,u,v),getval(id*2+1,m+1,r,u,v));
}
int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++)
        cin >> a[i];
    buildtree(1,1,n);
    int pos,len;
    while(m--)
    {
        cin >> pos >> len;
        int tmp=getval(1,1,n,pos,min(pos+len-1,n))+1;
        cout << tmp << endl;
        update(1,1,n,pos,min(pos+len-1,n),tmp);
    }
    return 0;
}
