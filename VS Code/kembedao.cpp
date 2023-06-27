#include <bits/stdc++.h>

using namespace std;

bool check(int a[], int i, int dem, bool mark[])
{
    if (a[i + 1] == 0 && a[i + 2] == 2 && a[i + 3] == 3)
    {
        if (mark[i + 1] != true && mark[i + 2] != true && mark[i + 3] != true)
        {
            mark[i + 1] = mark[i + 2] = mark[i + 3] = true;
            return true;
        }
    }

    int I1 = i + 1, I2 = i + 2, I3 = i + 3;
    while (mark[I1])
        I1 += 4;
    while (mark[I2])
        I2 += 4;
    while (mark[I3])
        I3 += 4;

    if (I1 < I2 && I2 < I3)
        if (a[I1] == 0 && a[I2] == 2 && a[I3] == 3)
        {
            mark[I1] = mark[I2] = mark[I3] = true;
            return true;
        }
    return false;
}

void solve(int a[], bool mark[], int n)
{
    int res = 0, dem = 0;
    for (int i = 1; i <= n; i++)
        mark[i] = false;
    for (int i = 1; i <= n - 3; i++)
    {
        if (!mark[i])
        {
            if (a[i] == 2)
                if (check(a, i, dem, mark))
                {
                    mark[i] = true;
                    dem++;
                    res++;
                    i -= 4;
                    i = max(i, 0);
                }
        }
        else
        {
            dem = 0;
            i += 3;
        }
    }
    if (!res)
        cout << ":(\n";
    else if (res & 1)
        cout << "Bedao\n";
    else
        cout << "Bemai\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T, n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        int a[n + 9];
        bool mark[n + 9];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        solve(a, mark, n);
    }
    return 0;
}
