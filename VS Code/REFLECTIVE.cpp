#include <bits/stdc++.h>

using namespace std;

long long l, r, tmp = 2, res = 0, L, R;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> l >> r;
    while(tmp<=r)
    {
        L =( l / tmp );
        if(l%tmp)
            L++;
        R = r / tmp;
        res += max(R - L + 1, (long long)(0));
        tmp *= 2;
    }
    cout << res;
    return 0;
}