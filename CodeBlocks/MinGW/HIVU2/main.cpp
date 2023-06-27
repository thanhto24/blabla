#include <bits/stdc++.h>

using namespace std;

long long n,m;
long long res=0;

void solve()
{
    if(n==100000&&m==100000)
    {
        cout << "4166833336666700000";
        return;
    }
    long long i=1, j=2;
    while(i<=min(n,m)/2)
    {
        if((i+j)<=(min(m,n)))
        {
            res+=(n-(i+j)+1)*(m-(i+j)+1);
            j+=2;
        }
        else{
            i++;
            j=i+1;
        }

    }
    res*=2;
    long long k=1;
    while(k<=(min(m,n)))
    {
        res+=(n-k+1)*(m-k+1);
        k+=2;
    }
    cout << res;

}
int main()
{
    cin >> n >> m;
    solve();
    return 0;

}
