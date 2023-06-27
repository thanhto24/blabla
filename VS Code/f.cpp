#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, res = 12;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 2; i <= n; i++)
        {
            res *= 3;
            res %=  998244353;
        }
    cout << res;
    return 0;
}