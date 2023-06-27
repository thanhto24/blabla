#include <bits/stdc++.h>

using namespace std;

int n, m, p, x, y;
vector <int> a;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> p;
    for(int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        a.push_back(y-x);
    }
    sort(a.begin(),a.end());
    cout << a[m-1] + 1;
    return 0;
}
