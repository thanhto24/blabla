#include <iostream>
#include <vector>
using namespace std;

int n,k,fi[100005],a[100005], f[100005], len=0;
long long pre[100005];
void enter()
{
    cin >> n >> k;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        a[i]%=k;
    }
    pre[0]=0;
    for(int i=1;i<=n;i++)
        {
            pre[i]=(pre[i-1]+a[i])%k;
        }
    for(int i=0;i<=n;i++){
            f[pre[i]]++;
            if(f[pre[i]]==1)
                fi[pre[i]]=i;
            if(f[pre[i]]>=2)
            len=max(len,i-fi[pre[i]]);
        }

}
void solve()
{
    cout << len;
}
int main()
{
    enter();
    solve();
    return 0;
}
