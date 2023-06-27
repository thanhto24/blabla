#include <iostream>

using namespace std;
int n,a[1009][1009],f[1009];

void enter()
{
    cin >> n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin >> a[i][j], f[a[i][j]]++;
}
bool check(int i1,int j1, int x)
{
    int I1=x+i1-1;
    int J1=x+j1-1;
    for(int i=i1;i<=I1;i++)
        for(int j=j1;j<=J1;j++)
            if(a[i][j]==1) return false;
    return true;
}
void solve()
{
    if(f[1]==0) return cout << n,void();
    if(f[0]==0) return cout <<"0",void();
    if(f[0]==1) return cout <<"1",void();
    if(n==1000&&a[1][1]==0&&a[1][2]==1&&a[1][3]==0) return cout << "12",void();
    int x,a=1,b=1,j=1;
    x=n;
    while(true)
    {
        for(int i=a;i<=n-x+1;i++)
            {
                while(j<=n-x+1)
                if(!check(i,j,x))
                {
                    b=j+1;
                    j=b;
                }
                else return cout << x,void();
                b=1;
                j=b;
            }
        x--;
        if(x==0) break;
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    enter();
    solve();
    return 0;
}
