#include <iostream>

using namespace std;
const int N=1e9;
long long n,F[1009],a[1009];

void enter()
{
    cin >> n;
    for(int i=1; i <= n; i++) cin >> a[i];
}
void solve()
{
    F[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(a[i]==2) F[i]=0;
        if(a[i]==1) F[i]=F[i-1]%N;
        if(a[i]==0)
        {
            if(a[i-3]==1) F[i]=(F[i-2]+F[i-1])%N;
            else F[i]=(F[i-1]+F[i-2]+F[i-3])%N;
        }
    }
    cout << F[n]%N;
}
int main()
{
    enter();
    solve();
    return 0;
}
