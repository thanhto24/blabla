#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e6 + 1;

int n, m, k, a[maxN];

bool cmp(int a, int b)
{
    return a > b;
}

long long calc(int start)
{
    long long tmp = 0;
    for(int i = start; i <= start + n - 1; i++)
    {
        tmp += a[i];
    }
    return tmp;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n >> k;
    for(int i = 1; i <= m; i++)
        cin >> a[i];

    sort(a+1,a+m+1,cmp);

    for(int i = 1; i <= m - n + 1; i++)
    {
        if(a[i] - a[i+n-1] <= k)
            return cout << calc(i), 0;
    }

    cout << -2;
    return 0;
}