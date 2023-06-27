#include <iostream>

using namespace std;

int n,k,res;
int a[1003];

void enter()
{
    cin >> n >> k;
    for(int i=1;i<=n;i++) cin >> a[i];
}
void solve()
{
    res=a[k];
    a[k]=0;
    res-=(n-k);
    if(res>0)
    for(int i=1;i<=n;i++)
    {
        a[i]+=(res/n);
        if(i<=res%n) a[i]++;
        if(i>k) a[i]++;
    }
    if(res<=0)
    {
        res+=(n-k);
        for(int i=k+1;i<=k+res;i++)
            a[i]++;
    }
    for(int i=1;i<=n;i++) cout << a[i] << " ";
}
int main()
{
    enter();
    solve();
    return 0;
}
