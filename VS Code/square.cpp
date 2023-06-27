#include <bits/stdc++.h>

using namespace std;

long long n, dem = 1, r, res = 0;

bool check(int a, int b)
{
    return sqrt(a*b)==(int)(sqrt(a*b));
}
void trau()
{
    cout << endl << endl << endl;
    int tmp = 0;
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            for (int k = j + 1; k <= n; k++)
                if (check(i, j) && check(i, k) && check(j, k))
                    // cout << i << " " << j << " " << k << endl,
                    tmp++;
    cout << tmp;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    long long mx = -1;
    cin >> n;
    while (3 * 3 * dem <= n)
    {
        if(sqrt(dem)==(int)(sqrt(dem))&&dem!=1)
        {
            dem++;
            continue;
        }
        r = sqrt(n / dem);
        // cout << dem << " " << r << " ";
        res += r * (r - 1) * (r - 2) / 6;
        mx = max(mx, dem);
        // cout << res << endl;
        dem++;
    }
    for(int i = 2; i <= mx/4; i++)
    {
        if(sqrt(i)!=(int)(sqrt(i)))
        {
            res -= (int)sqrt(mx/i);
            ++res;
        }
    }
    cout << res;
    trau();
    return 0;
}
