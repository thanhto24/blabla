#include <bits/stdc++.h>

using namespace std;
const int maxN=1e5+5;
int n,a[maxN];
long long s[maxN];
struct mang{
    int x;
    int y;
    int giatri;
    bool operator < (const mang other)
    {
        return giatri< other.giatri;
    }
};
mang ans[maxN];
bool check(int xx,int yy, int i, int j)
{
    if(i<=xx&&j>=xx) return false;
    if(i<=yy&&j>=yy) return false;
    return true;
}
void enter()
{
	cin>>n;
	for (int i=1; i<=n; i++) cin>>a[i];
	s[0]=0;
	for (int i=1; i<=n; i++) s[i]=s[i-1]+a[i];
}
void solve()
{
    int dem=1,xx,yy;
	long long res=LLONG_MIN,tmp;
	for (int i=1; i<=n-1; i++)
		for (int j=i+1; j<=n; j++)
		{
			tmp=s[j]-s[i-1];
			if ((j-i+1)%3==0) {
                res=max(res,tmp);
                ans[dem].x=i;
                ans[dem].y=j;
                ans[dem].giatri=tmp;
                dem++;
			}
		}
    sort(ans+1,ans+dem);
    for(int i=1;i<dem;i++)
        cout << ans[i].x << " " << ans[i].y << " " << ans[i].giatri << endl;
    xx=ans[dem-1].x;
    yy=ans[dem-1].y;
    for(int i=dem-1;i>0;i--)
    {
        if(check(xx,yy,ans[i].x,ans[i].y)) {tmp=ans[i].giatri; break;}
    }
	cout<<res+tmp;
}
int main()
{
    enter();
    solve();
    return 0;
}
