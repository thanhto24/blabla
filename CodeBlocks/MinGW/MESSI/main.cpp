#include <iostream>

using namespace std;

using ll = long long;

const long long maxN=1e9+7;
int x, n;

int transfromm(string K, int base)
{
    int lengthh=0;
    long long number = 0;
    if(K.length()>9)
    lengthh = K.length()-9;
    for(int i=lengthh; i < K.length();i++)
    {
        number*=10;
        number+=K[i]-'0';
    }
    return number%base;
}
ll calc(ll gt, ll mu, int base)
{
    ll kq=1;
    for(int i=mu; i != 0; i/=2){
        if(i%2==1)
            kq=kq*gt%base;
        gt=gt*gt%base;
    }
    return kq;
}
int main()
{
    string X,N;
    cin >> X >> N;
    n = transfromm(N,maxN-1);
    x = transfromm(X,maxN);
    cout << n << endl << x << endl;
    cout << calc(x,n,maxN);
    return 0;
}
