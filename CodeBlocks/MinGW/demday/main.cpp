#include <iostream>

using namespace std;
using ll=long long;

const ll N=123456789;
ll n;
int cal(ll a, ll b)
{
    if(b==0) return 1;
    ll x=cal(a,b/2);
    if(b%2==0) return (x*x)%N;
    else return (a*x*x)%N;

}
int main()
{
    cin >> n;
    cout << cal(2,n-1);
    return 0;
}
