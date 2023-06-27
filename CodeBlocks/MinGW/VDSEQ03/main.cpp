#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
const int maxN=1e6+6;
map <long long, int> mp;
int n,v,a[maxN],res=0;
long long pre[maxN];
int main()
{
    pre[0]=0;
    cin >> n >> v;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        pre[i]=pre[i-1]+a[i];
        mp.insert({pre[i],i});
    }
    int x=0,l=0,key=0;
    key=lower_bound(pre+1,pre+n+1,pre[n]-v)-pre;
    if(pre[n]-v!=pre[key]) key--;
    for(auto dem:mp)
    {
        int i=dem.second;
        if(i>key+1) break;
        l=mp[pre[i]];
        x=lower_bound(pre+l,pre+n+1,v+pre[i-1])-pre;
        if(x<=n) res+=n-x+1;
    }
    cout << res;
    return 0;
}
