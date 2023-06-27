#include <bits/stdc++.h>

using namespace std;


const int N = 1e5 + 5;
long long n, q, L[N], R[N], a[N], tree[4*N],lazy[4*N],x[N], I, Info[N],Case[N];
bool check[N];

void buildTree(int id, int l, int r)
{
    if(l>r) return;
    if(l==r) return tree[id] = a[l], void();
    int m = ( l + r )/2;
    buildTree(id*2,l,m);
    buildTree(id*2+1,m+1,r);
    tree[id] = tree[id*2] + tree[id*2+1];
}

void down(int id, int l, int r)
{
    if(lazy[id]&&l!=r)
    {
        lazy[id*2] += lazy[id];
        lazy[id*2+1] += lazy[id];

        int m = (r + l)/ 2;
        tree[id*2] += lazy[id] * (m - l + 1);
        tree[id*2+1] += lazy[id] * (r - m);

        lazy[id] = 0;
    }
}
long long getVal(int id, int l, int r, int u, int v)
{
    down(id,l,r);
    if(l>v||r<u) return 0;
    if(l >= u && r <= v) return tree[id];
    int m = (l+r)/2;
    int t1 = getVal(id*2,l,m,u,v);
    int t2 = getVal(id*2+1,m+1,r,u,v);
    return t1 + t2;
}

void update(int id, int l, int r, int u, int v, int k)
{
    if(l>v||r<u) return;
    if( l >= u && r <= v)
    {
        tree[id] += k * (r - l + 1);
        lazy[id] += k;
        return;
    }
    down(id,l,r);
    int m = ( l + r)/2;
    update(id*2,l,m,u,v,k);
    update(id*2+1,m+1,r,u,v,k);
    tree[id] = tree[id*2] + tree[id*2+1];
}
void xuat()
{
    for(int i = 10; i > 0; i--)
        cout << i << " " << tree[i] << "    ";
    cout << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> q;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    buildTree(1,1,n);
    int l, r;
    for(int i = 1; i <= q; i++)
    {
        cin >> Case[i];
        if(Case[i]==1)
        {
            cin >> L[i] >> R[i] >> x[i];
            update(1,1,n,L[i],R[i],x[i]);
            // xuat();
        }
        if(Case[i]==2)
        {
            cin >> I;
                while(Case[I]!=1)
                    I = Info[I];
                x[I]*=-1;
                update(1,1,n,L[I],R[I],x[I]);
                Info[i] = I;
            // xuat();
        }
        if(Case[i]==3)
        {
            cin >> l >> r;
            cout << getVal(1,1,n,l,r) << endl;
            // xuat();
        }

    }
    return 0;
}
