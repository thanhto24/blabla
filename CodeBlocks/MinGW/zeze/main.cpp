#include <bits/stdc++.h>

using namespace std;

int n, T, x;
vector <int> a;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    while(T--)
    {
        bool ok = false;
        cin >> n;
        for(int i = 0; i < n; i++) cin >> x, a.push_back(x);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                for(int k = 0; k < n; k++)
                    if(a[i]+a[j]==a[k]&&i!=j&&j!=k)
                {
                    ok = true;
                    break;
                }
            }
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
        a.clear();
    }
    return 0;
}
