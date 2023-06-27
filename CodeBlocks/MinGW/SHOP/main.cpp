#include <iostream>
#include <vector>
using namespace std;

int a[106];
int main()
{
    long long n,S;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i], S+=a[i];
    vector <bool> dp(S+1,false);
    dp[0]=true;
    for(int i=0;i<n;i++)
    {
        for(int j=S;j>=a[i];j--)
            if(dp[j-a[i]]==true)
                dp[j]=true;
    }
    for(int i=1;i<=S;i++)
    if(!dp[i])
    {
        cout << i;
        break;
    }
    return 0;
}
