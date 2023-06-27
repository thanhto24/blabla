#include <iostream>

using namespace std;

int n,k;
int a[1003][1003];
long long res=0, ans;

long long nsum(int d, int c)
{
    for(int i=0;i<k;i++)
        res-=a[d+i][c-1];
    for(int i=0;i<k;i++)
        res+=a[d+i][c+k-1];
    return res;
}
long long getsum(int d, int c)
{
    for(int i=0;i<k;i++)
        res-=a[d-1][c+i];
    for(int i=0;i<k;i++)
        res+=a[d+k-1][c+i];
    return res;

}
long long getsum1()
{
    res=0;
    for(int i=1;i<=k;i++)
        for(int j=1;j<=k;j++)
            res+=a[i][j];
    return res;
}
void enter()
{
    cin >> n >> k;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin >> a[i][j];
}
void solve()
{
    int tmp=n-k+1;
    long long X;
    X=getsum1();
    ans=getsum1();
    int i=1, j=2, key=0;
    while(i<=tmp&&j<=tmp)
    {
        if(key==0)
        res=nsum(i,j);
        if(key==1)
        {
            res=getsum(i,j);
            X=res;
        }
        ans=max(ans,res);
        j++;
        key=0;
        if(j>tmp)
        {
            i++;
            j=1;
            key=1;
            res=X;
        }
        if(i>tmp) break;
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    enter();
    solve();
    return 0;
}
