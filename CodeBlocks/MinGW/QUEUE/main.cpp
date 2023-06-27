#include <bits/stdc++.h>

using namespace std;

long long a;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>a;
    long long dem=0;
    for(int i=1;i<a;i++) if((a*a)%i==0)
    {
        long long b=i,c=(a*a)/i;
        if((b+c)%2==0&&(max(b,c)-min(b,c))/2>a) dem++;
    }
    cout<<dem;
    return 0;
}

