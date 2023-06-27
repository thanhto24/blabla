#define ii pair <int, int>
#define f first
#define s second
#include <iostream>
#include <algorithm>
using namespace std;
ii a[50005];
int n, res;

bool cmp(ii a, ii b)
{
    return a.f<b.f;
}
void enter()
{
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> a[i].f  >> a[i].s;
}
void solve()
{
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
    {
        if(a[j].f<a[i].s) res++;
    }
    cout << res;
}
int main()
{
    enter();
    solve();
    return 0;
}
