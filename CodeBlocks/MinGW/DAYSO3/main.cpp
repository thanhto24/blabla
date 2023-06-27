#include <iostream>
#include <math.h>
using namespace std;

using ll = long long;
const int maxN=1e9+7;

ll calc(ll gt, ll mu, ll base)
{
    ll kq=1;
    for(ll i = mu; i !=0; i/=2 )
    {
        if(i%2==1)
            kq=kq*gt%base;
        gt=gt*gt%base;
    }
    return kq;
}
int main()
{
    int T,K,N;
    cin >> T;
    while(T--)
    {
        cin >> K >> N;
        if(N==1) cout << 1 << endl;
        if(N==2||N==3) cout << K << endl;
        if(N>3)
        cout << calc(K,calc(2,N-3,maxN-1),maxN) << endl;
    }
    return 0;
}
