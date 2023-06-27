#include <bits/stdc++.h>

using namespace std;

int n, a[100005], b[100005], res;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i];
        a[i] = b[i];
        if(a[i]<0) a[i]*=-1;
    }
    sort(a+1,a+n+1);
    for(int i = 1; i <= n; i+=2)
    {
        if(a[i]!=a[i+1])
        {
            res = a[i];
            break;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(b[i]==res)
            return cout << res * -1, 0;
        res *= -1;
        if(b[i]==res)
            return cout << res * -1, 0;
    }
    return 0;
}