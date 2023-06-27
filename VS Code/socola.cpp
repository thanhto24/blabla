#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e5 + 5;

int n, T;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    while (T--)
    {
        int a[maxN], f[maxN], sum1, sum2;
        f[0] = INT_MIN;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            f[i] = max(f[i - 1], max(a[i], f[i - 1] + a[i]));
            if (i == 1)
                sum1 = sum2 = a[i];
            else
            {
                sum1 = max(a[i], sum1 + a[i]);
                sum2 = max(sum1, sum2);
            }
        }
        cout << f[n] << " " << sum2 << endl;
    }
    return 0;
}