#include <iostream>

using namespace std;
const int N=1e5+5;
int n,T,a[N],tree[N*4];
void buildtree(int id, int l, int r)
{
    if(l==r)
        return tree[id]=a[l],void();
    if(l>r) return;
    int m=(l+r)/2;
    buildtree(id*2,l,m);
    buildtree(id*2+1,m+1,r);
    tree[id]=tree[id*2]*tree[id*2+1];
}
long long getval(int id,int l, int r, int u, int v)
{
    if(l>v||r<u) return 3;
    if(u<=l&&r<=v) return tree[id];
    int m=(r+l)/2;
    return (getval(id*2,l,m,u,v)*getval(id*2+1,m+1,r,u,v));
}
int main()
{
    cin >> n >> T;
    for(int i=1;i<=n;i++)
        {
            cin >> a[i];
            if(a[i]>0) a[i]=1;
            if(a[i]<0) a[i]=-1;
            if(a[i]==0) a[i]=2;
        }
    buildtree(1,1,n);
    int L,R;
    long long res;
    while(T--)
    {
        cin >> L >> R;
        res=getval(1,1,n,L,R);
        if(abs(res)%2==0)  cout << "0" << endl;
        else{
            if(res>0)  cout << "+" << endl;
            else  cout << "-" << endl;
        }

    }
}
