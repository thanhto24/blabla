#include <iostream>

using namespace std;

int n, a[100005];
long long res[100005];
void enter()
{
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> a[i];
}
void solve()
{
    int i=2;
    long long tmp=INT_MIN, ans=INT_MIN;
    res[1]=a[1]+a[2]+a[3];
    while(i<=n-2)
        res[i]=res[i-1]-a[i-1]+a[i+2], ans=max(ans,res[i]), cout << res[i] << endl ,i++;
    int key=n/3;
    int k=1;
    while(k<=key)
    {
        int i=1;
        while(n-3*k+1>=i)
        {
            tmp=res[i]+res[i+k*3];
            ans=max(ans,tmp);
            cout << tmp << " "<< i << ":" << k << endl;
            i++;
        }
        k++;
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
    enter();
    solve();
    return 0;
}
