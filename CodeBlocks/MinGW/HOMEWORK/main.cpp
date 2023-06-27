#include <iostream>
#include <algorithm>

using namespace std;

long long n,a[100005];
long long res;

void enter()
{
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
}
void solve()
{
    res=a[1];
    for(int i=1;i<=n;i++)
    {
        res=__gcd(res,a[i]);
        if(res==1) break;
    }
    cout << n*res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    enter();
    solve();
    return 0;
}
