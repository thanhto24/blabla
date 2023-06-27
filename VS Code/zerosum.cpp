#include <bits/stdc++.h>

using namespace std;

int n, a[200005];
long long sum = 0;
map <long long, int> mp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if(!a[i])
            dem++;
        // if(!sum&&!a[i])
        //     dem++;
        mp[sum] ++;
    }
    cout << res + dem;
    return 0;
}