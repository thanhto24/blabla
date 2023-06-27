#include <iostream>
#define cnt first
#define len second
#define ll long long

using namespace std;

pair <ll,ll> F[49];

ll query(int n, ll k)
{
    if(F[n].len<=k) return F[n].cnt;
    if(F[n-2].len<k) return query(n-2,F[n-2].len) + query(n-1,k-F[n-2].len);
    else return query(n-2,k);
}
void init()
{
    F[0]={1,1};
    F[1]={0,1};
    for(int i = 2; i <= 45; i++)
    {
        F[i].len=F[i-2].len+F[i-1].len;
        F[i].cnt=F[i-2].cnt+F[i-1].cnt;
    }
}
void solve(int n, ll k)
{
    cout << query(n,k) << endl;
}
int main()
{
    int n,T;
    ll k;
    init();
    cin >> T;
    while(T--)
    {
        cin >> n >> k;
        solve(n,k);
    }
}
