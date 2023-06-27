#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int n,a[100005],tmp=-1,pos;
set <int> s;
void enter()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        tmp=max(a[i],tmp);
        if(tmp==a[i]) pos=i;
        s.insert(a[i]);
    }
}
void solve()
{
    int ok=0,tmpp=pos;
    for(auto x:s)
    {
        tmpp++;
        {
            if(tmpp<=n)
            if(x!=a[tmpp])
            {
                ok=1;
                break;
            }
        }
    }
    pos=n-pos;
    tmpp=0;
    if(s.size()!=n||pos==0||ok==1) return cout << "-1",void();
    sort(a+1,a+n+1);
    for(auto x:s)
    {
        tmpp++;
        if(tmpp>pos)
        {
            if(x!=a[tmpp])
            {
                ok=1;
                break;
            }
        }
    }
    if(ok==1) return cout << "-1",void();
    else cout << n-pos+1;
}
int main()
{
    enter();
    solve();
    return 0;
}
