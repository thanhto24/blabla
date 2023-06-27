#include <iostream>
#include <set>
using namespace std;
int n,a[1003],pre[1003],tmp,res[1003],ans=1;
set <int> s;
void enter()
{
    cin >> n;
    pre[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        pre[i]=pre[i-1]+a[i];
        s.insert(pre[i]);

        res[i]=0;
    }
}
void solve()
{
    for(int i=1;i<=n;i++)
    {
        tmp=pre[i];
        while(true)
        {
            if(s.count(tmp))
            {
                res[i]++;
                tmp+=pre[i];
            }
            else
            {
                if(tmp-pre[i]!=pre[n])
                    res[i]=0;
                break;
            }
        }
        ans=max(ans,res[i]);
    }
    cout << ans;
}
int main()
{
    enter();
    solve();
    return 0;
}
