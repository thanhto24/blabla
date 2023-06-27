#include <iostream>

using namespace std;
using ll = long long;
ll n,k,N,vitri=0,key=0,T=0,res=0,TMP=0,sum=0;
ll f[300],so[300];
int findd(int x)
{
    int j=1;
    while(true)
    {
        if(so[j]==x) return j;
        j++;
    }
}
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin >> n >> k;
    ll i=1,j=1;
    N=n;
    {
        while(true)
    {
        so[i]=N%100;
        if(so[i]==0) return cout << N,0;
        N+=so[i];
        f[so[i]]++;
        if(f[so[i]]>1)
        {
            vitri=findd(so[i]);
            j=vitri;
            key=i-vitri;
            break;
        }
        if(i==k) return cout << N,0;
        i++;
    }
    vitri--;
    T=(k-vitri)/key;
    TMP=(k-vitri)%key;
    for(int i=vitri+1;i<=key+vitri;i++) sum+=so[i];
    res+=T*sum;
    res+=n;
    for(int i=vitri+1;i<=vitri+TMP;i++)
    {
        res+=so[i];
    }
    for(int i=0;i<=vitri;i++) res+=so[i];
    cout << res;
    return 0;
    }

    return 0;
}
