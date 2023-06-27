#include <bits/stdc++.h>

using namespace std;

int n, a[1003];
long long pre[1003], res = 0;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i < n; i++)
    {
        pre[i]=a[i+1]-a[i];
    }
    for(int i = 1; i < n-1; i++)
    {
        res = max(res, pre[i] + pre[i + 1]);
    }
    cout << res;
    return 0;
}
