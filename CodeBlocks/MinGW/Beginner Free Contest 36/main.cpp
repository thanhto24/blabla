#include <bits/stdc++.h>

using namespace std;
int n, a[100005], ans = 0, res = 0, k;
int main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
       cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        res+=a[i];
        if(i>k)
        {
            res -= a[i-k];
        }
        ans = max (ans, res);
    }
    cout << ans;
    return 0;
}
