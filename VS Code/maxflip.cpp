#include <bits/stdc++.h>

using namespace std;

int n, a[100005], sum = 0;
bool flag1 = false, flag2 = false;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == -1)
            flag1 = true;
        if (i < n)
            if (a[i] == -1 && a[i + 1] == -1)
                flag2 = true;
    }
    if (flag2)
        sum += 4;
    else if (!flag1)
        sum -= 4;
    cout << sum;
    return 0;
}