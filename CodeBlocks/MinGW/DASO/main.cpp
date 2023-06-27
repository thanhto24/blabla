#include <iostream>

using namespace std;

long long n, a[30003], ans=0, res=0;
void enter()
{
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> a[i];
}
void solve()
{
    int l=1;
    for(int r=l+2;r<=n;r++)
    {
        if(a[r]-a[r-1]==a[r-2])
            res++;
        else
            res=0, l=r-1;
        if(l>n-1) break;
        ans=max(ans,res);
    }
    if(ans==0) ans=-1;
    else ans+=2;
    cout << ans;
}
int main()
{
    enter();
    solve();
    return 0;
}
