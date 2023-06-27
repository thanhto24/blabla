#include <bits/stdc++.h>

using namespace std;

long long n, a, b, res = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        res += (b+1)*b/2 - (a-1)*a/2;
    }
    cout << res;
    return 0;
}