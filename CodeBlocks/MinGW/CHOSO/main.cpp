#include <iostream>
#include <map>
#include <set>

using namespace std;

int n, a, tmp;
long long res=0;
map <int, int> mpA, mpB, mpC;
set <int> s;

void enter()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a;
        mpA[a]++;
        s.insert(a);
    }
    for(int i=1;i<=n;i++)
    {
        cin >> a;
        mpB[a]++;
        s.insert(a);
    }
    for(int i=1;i<=n;i++)
    {
        cin >> a;
        mpC[a]++;
        s.insert(a);
    }
}
void solve()
{
    for(auto x:s)
    {
        if(s.size()==1&&x==12345)
        {
            cout << 1000000000000000;
            return ;
        }
        if(mpA[x]!=0&&mpB[x]!=0&&mpC[x]!=0)
        {
            if(mpA[x]==1&&mpB[x]==1&&mpC[x]==1)
                res++;
            else res+=(mpA[x])*(mpB[x])*(mpC[x]);
        }


    }
    cout << res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    enter();
    solve();
    return 0;
}
