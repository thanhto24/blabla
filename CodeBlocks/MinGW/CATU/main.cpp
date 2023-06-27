#include <iostream>
#include <string.h>
using namespace std;

int n,s;
int v[102], w[102], dp[102][102];

void Trace()
{
    while(n!=0)
    {
        if(dp[n][s]!=dp[n-1][s])
        {
            cout << n << " ";
            s=s-w[n];
        }
        n--;
    }

}
void solve()
{
    cin >> n >> s;
    for(int i=1;i<=n;i++)
        cin >> w[i] >> v[i];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j>=w[i])
            {
                dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+v[i]);
            }
        }
    }
    cout << dp[n][s];
    cout << endl;
    Trace();
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
