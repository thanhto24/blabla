#include <bits/stdc++.h>

using namespace std;
int n, a[1000007], dem = 0, tmp = 1;
long long res;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if(!a[i])
            dem++;
        }
    for(int i = 1; i <= n; i++)
    {
        if(!a[i])
        {
            res += i - tmp;
            tmp++;
        }
        if(tmp==dem+1)
            break;
    }
    cout << res;
    return 0;
}