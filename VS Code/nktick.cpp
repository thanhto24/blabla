#include <bits/stdc++.h>

using namespace std;

long long n, t[600005], r[600004], f[600005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> t[i];
    for(int i = 1; i < n; i++)
        cin >> r[i];


    long long i = 1, res = 0, tmp;

    while(i < n)
    {
        if(t[i]+r[i+1]>=r[i]+t[i+2])
            res += r[i],
            i += 2;
        else
            res += t[i],
            i += 1;
    }
    if(i==n)
        res += t[i];
    cout << res;
    return 0;
}