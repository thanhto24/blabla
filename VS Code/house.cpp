#include <bits/stdc++.h>

using namespace std;

int n, a[(int)1e5 + 5], maxx = -1, ans = -1, res;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > maxx)
        {
            maxx = a[i];
            continue;
        }
        else
        {
            res = max(maxx - a[i], -1);
            ans = max(ans, res);
        }
    }
    if (ans > 0)
        cout << ans;
    else
        cout << "Lo nang roi!";
    return 0;
}