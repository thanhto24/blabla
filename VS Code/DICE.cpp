#include <bits/stdc++.h>

using namespace std;

const int base = 14062008;
int n, k, tmp, dp[100005];
bool is[100005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    for(int i = 1; i <= k; i++)
        cin >> tmp,
        is[tmp] = true;

    dp[1] = 1;
    dp[0] = 0;

    for(int i = 2; i <= n; i++)
    {
        if(is[i])
            dp[i] = 0;
        else
        {
            dp[i] = dp[i-1] + dp[i-2];
            dp[i] %= base;
        }
    }
    cout << dp[n];
    return 0;
}