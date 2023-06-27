#include <bits/stdc++.h>

using namespace std;

int n, a[100005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = n; i > 1; i--)
    {
        if(a[i]>=2)
            a[i-1] += a[i]/2;
    }
    cout << a[1];
    return 0;
}