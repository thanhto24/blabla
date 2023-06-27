#include <bits/stdc++.h>

using namespace std;

int T, n, m, x, y, tmp;
long long way1, way2, way3, res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    while (T--)
    {
        cin >> n >> m >> x >> y;
        tmp = ((n & 1) != (m & 1));
        if (n > m)
            swap(n, m);

        --n;
        --m;

        way1 = (n + m) * x;
        way2 = n * y + (m - n) * x;

        res = min(way1, way2);

        if (n >= 1)
            way3 = (m - tmp) * y + tmp * x,
            res = min(res, way3);

        cout << res << endl;
    }
    return 0;
}