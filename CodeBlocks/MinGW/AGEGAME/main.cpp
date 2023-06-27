#include <iostream>
#include <string.h>
#include <math.h>
#include <algorithm>
using namespace std;
bool prime[100004];
int a[100004];
int n;
void snt()
{
    memset(prime,true,sizeof(prime));
    prime[1]=false;
    prime[0]=false;
    for(int i=2;i*i<=10000;i++)
        if(prime[i])
        for(int j=i*i;j<=10000;j+=i)
            prime[j]=false;
}
void solve()
{
    int pos=1,res=0,dem=0;
    for(int i=2;i<=n;i++)
    {
        if(prime[i]){
            res++;
            a[res]=i;
        }
    }
    a[res+1]=INT_MAX;
    while(true)
    {
        if(a[pos]*a[pos+1]<=n) pos++;
        else break;
    }
    int i=pos-1;
    dem=pos;
    while(i>0&&dem<=res){
        if(a[i]*a[dem]<=n)
        {
            res--;
            dem++;
        }
        i--;
    }
    cout << res;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    snt();
    solve();
    return 0;
}
