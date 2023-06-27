#include <iostream>
#include <algorithm>
using namespace std;

long long res;
long long n, a[100005], pre[100005];

void enter()
{
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> a[i];
}
void solve()
{
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
        pre[i]=pre[i-1]+a[i];
    for(int i=1;i<=n;i++)
        res+=pre[i];
    cout << res;
}
int main()
{
    enter();
    solve();
    return 0;
}
