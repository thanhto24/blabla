#define ii pair<int, int>
#define f first
#define s second
#include <bits/stdc++.h>

using namespace std;

ii timee[1000005];
int s[1000005], e[1000005], n;
long long res = 0;

bool cmp( ii a, ii b)
{
    return a.f < b.f || ( a.f == b.f && a.s < b.s );
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> timee[i].f >> timee[i].s;
    sort( timee + 1, timee + n + 1, cmp );
    for(int i = 1; i <= n; i++)
        s[i] = timee[i].f,
        e[i] = timee[i].s;
    for(int i = 1; i <= n; i++)
    {
        res += lower_bound( s + 1, s + n + 1, e[i] ) - s - 1 - i;
    }
    cout << res;
    return 0;
}