#include <iostream>
#include <string.h>

using namespace std;

int n,W,v[102],w[102];
long long dp[102][102];
void enter()
{
    cin >> n >> W;
    for( int i = 1; i <= n; i++)
    {
        cin >> w[i] >> v[i];
    }
}
void solve()
{
    memset(dp,0,sizeof(dp));
    for( int i = 1; i <= n; i++)
    {
        for( int j = 1; j <= W; j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j>=w[i])
            {
                dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+v[i]);
            }
        }
    }
    cout << dp[n][W];
}
int main()
{
    enter();
    solve();
    return 0;
}
