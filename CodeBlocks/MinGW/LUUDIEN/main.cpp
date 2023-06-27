#define ii pair <int, int>
#define f first
#define s second
#include <iostream>
#include <algorithm>
using namespace std;
ii a[50005];
int n, res[50005],ans;

bool cmp(ii a, ii b)
{
    return a.f<b.f;
}
void enter()
{
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> a[i].f  >> a[i].s;
}
void solve()
{
    sort(a+1,a+n+1,cmp);
    for(int c=1;c<=n;c++)
    {
        int i=c;
        int stop=0;
        while(i<n)
      {
            for(int j=i+1;j<=n;j++)
        {
                if(a[j].f>a[i].s) {res[c]++;i=j;}
                else if(j==n) stop=1;
        }
            if(stop==1) i=n;
        ans=max(ans,res[c]);
      }
    }
    cout << ans+1;
}
int main()
{
    enter();
    solve();
    return 0;
}
