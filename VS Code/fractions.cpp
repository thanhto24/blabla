#include <bits/stdc++.h>
using namespace std;
int n, T, a[100005], b[100005];
int mauso, tuso, Gcd;
int main()
{
    cin >> T;
    while(T--)
    {
        mauso = tuso = 1;
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) cin >> b[i];
        for(int i = 1; i <= n; i++)
        {
            Gcd = __gcd(a[i],b[i]);
            a[i]/=Gcd;
            b[i]/=Gcd;
            tuso *= a[i];
            mauso *= b[i];
            Gcd = __gcd(tuso, mauso);
            tuso /= Gcd;
            mauso /= Gcd;
        }
        cout << tuso << " " << mauso << endl;
    }
    return 0;
}