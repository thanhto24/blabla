#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e5 + 1;
int n, ans = -1;
int a[maxN][4];
int f[maxN][4];

int maxx(int I, int J)
{
    int res = -1;
    for(int i = 1; i <= 3; i++)
    {
        if(i==J) continue;
        res = max(res, f[I-1][i]);
    }
    return res;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 3; j++)
            cin >> a[i][j];
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            f[i][j] = a[i][j] + maxx(i,j);
            ans = max(ans, f[i][j]);
        }
    }
    cout << ans;
    return 0;
}