#include <iostream>

using namespace std;
int n,Q;
long long tmp=0;
int a[1000006],tree[4*1000006];
void buildtree(int id,int l,int r)
{
    if(l==r)
        return tree[id]=a[l], void();
    if(l>r) return;
    int m=(l+r)/2;
    buildtree(id*2,l,m);
    buildtree(id*2+1,m+1,r);
    tree[id]= tree[id*2]+tree[id*2+1];
}
int getval(int id,int l, int r, int u, int v)
{
    if(l>v||r<u) return 0;
    if(u<=l&&r<=v) return tree[id];
    int m=(r+l)/2;
    return (getval(id*2,l,m,u,v)+getval(id*2+1,m+1,r,u,v));
}
void update(int id,int l, int r, int p, int val)
{
    if(p<l||p>r) return;
    if(l==r)
    {
        tree[id]+=val;
        a[p]+=val;
        return;
    }
    int m=(r+l)/2;
    update(id*2,l,m,p,val);
    update(id*2+1,m+1,r,p,val);
    tree[id]=tree[id*2]+tree[id*2+1];
}

int main()
{
    cin >> n >> Q;
    for(int i=1;i<=n;i++) cin >> a[i];
    buildtree(1,1,n);
    while(Q--)
    {
        char x;
        int i,j;
        cin >> x >> i >> j;
        i++;
        if(x=='S')
        {
            j++;
            cout <<getval(1,1,n,i,j)<< endl;
        }
        if(x=='U')
        {
            update(1,1,n,i,j);
        }
        if(x=='V')
        {
            update(1,1,n,i,j*-1);
        }
    }
    return 0;
}
