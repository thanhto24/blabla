#include <bits/stdc++.h>

using namespace std;
int L,R;
long long res=0;
bool notPrime(int prime[],int x)
{
    return prime[x/64]&(1<<(x>>1)&31);
}
bool point(int prime[], int x)
{
    prime[x/64]|=(1<<(x>>1)&31);
}
void bitwisesieve(int n)
{
    int prime[n/64];
    memset(prime,0,sizeof(prime));
    for(int i=3;i*i<=n;i+=2)
        if(!notPrime(prime,i))
            for(int j=i*i,k=i<<1;j<n;j+=k)
                point(prime,j);
    for(int i=3;i<=R;i+=2)
        if(!notPrime(prime,i))
            cout << i << " ";
    cout << res;
}
int main()
{
    cin >> L >> R;
    if(L<3) L=3;
    res++;
    bitwisesieve(R);
    return 0;
}
