#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T, n;
    cin >> T;
    while(T--)
    {
        cin >> n;
        int a[n];
        int pre[n];
        int dem = 1, ans = 0;
        memset(a,0,sizeof(a));
        pre[0] = 0;
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a+1,a+1+n);
        pre[1] = a[1];
        pre[2] = pre[1] + a[2];
        for(int i = 3; i <= n; i++)
        {
            if(a[i]<=pre[i-1])
            {
                pre[i] = pre[i-1] + a[i];
                dem++;
            }
            else
            {
                dem = 1;
                pre[i] = a[i];
            }
            if(dem>=3)
                ans = max(ans, pre[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
