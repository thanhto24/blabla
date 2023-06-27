#include <iostream>

using namespace std;

long long n,k,a[100005],b=1e9,s;
long long res=0;

void enter()
{
    cin >> n >> k;
    for(int i=1;i<=n;i++)
        cin >> a[i];
}
void solve()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            b=a[i];
            s=a[j];
            res=max(res,(s-b)*(k/b));
        }
    }
    cout << res;
}
int main()
{
    enter();
    solve();
    return 0;
}
