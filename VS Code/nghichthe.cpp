#include <iostream>

using namespace std;

const int N = 100006;

long long BIT[N], a[N], ans = 0, n;

void update(int x, int val)
{
    for( ; x; x -= x & -x)
        BIT[x] += val;
}

long long get(int x)
{
    long long s = 0;
    for( ; x <= n; x += x & -x)
        s += BIT[x];
    return s;
}

int main()
{
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        update(a[i],1);
        ans += get(a[i]+1);
    }
    cout << ans;
    return 0;
}