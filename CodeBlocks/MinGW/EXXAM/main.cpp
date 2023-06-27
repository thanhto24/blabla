#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, res1 = 0, res2 = 0, x;
    bool k = false;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> x;
        if(x<0) res1++;
        if(x>0) res2++;
        if(x==0) k = true;
    }
    if(k) cout << -1;
    else cout << min(res1, res2);
    return 0;
}
