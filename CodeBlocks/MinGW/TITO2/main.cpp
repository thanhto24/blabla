#include <iostream>

using namespace std;

double A,B;
long long a,b;
const long N=1e9+7;

void enter()
{
    cin >> A >> B;
    if(int(A)==A) a=int(A);
    else a=A+1;
    b=B;
}
void solve()
{
    cout << ((b*(b+1)*(2*b+1)/6)-(a*(a+1)*(2*a+1)/6)+a*a)%N;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    enter();
    solve();
    return 0;
}
