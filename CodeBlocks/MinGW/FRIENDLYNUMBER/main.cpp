#include <iostream>
#include <algorithm>
using namespace std;

int a,b;

int rev(int n)
{
    int tmp = 0;
    while(n > 0)
    {
        tmp *= 10;
        tmp += n%10;
        n /= 10;
    }
    return tmp;
}
void solve(int a, int b)
{
    int res = 0;
    for( int i = a; i <= b; i++)
    {
        if( i % 3 == 0) continue;
        if( __gcd(i,rev(i))==1) res++;
    }
    cout << res;
}
int main()
{
    cin >> a >> b;
    solve(a,b);
    return 0;
}
