#include <bits/stdc++.h>

using namespace std;

bool dao(int a, int b)
{
    return a > b;
}
int main()
{
    long long n, m, a[100007], b[100007];
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= m; i++)
        cin >> b[i];
    sort(a+1,a+n+1,dao);
    sort(b+1,b+m+1,dao);
    for(int i = 1; i <= min(n,m); i++)
    {
        if(a[i]>b[i]) return cout << a[i], 0;
    }
    cout << -1;
    return 0;
}
