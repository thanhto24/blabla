#include <iostream>
#include <string.h>
#include <algorithm>
#include <stdio.h>
using namespace std;

long long T,n,a[100005];
void enter()
{
    memset(a,0,sizeof(a));
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> a[i];
}
void solve()
{
    a[0]=a[1];
    a[n+1]=a[n];
    for(int i=0;i<=n;i++)
        cout << (a[i]*a[i+1])/(__gcd(a[i],a[i+1])) << " ";
        cout << endl;
}
int main()
{
    cin >> T;
    while(T--)
    {
        enter();
        solve();
    }
    return 0;
}
