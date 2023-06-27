#include <bits/stdc++.h>

using namespace std;

int n, Time, a[1000006], b[1000006], tmp = 0, dem = 0;
set <int> s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> Time;
    for(int i = 1; i <= n; i++)
        cin >> a[i], b[i] = a[i];
    sort(a+1,a+n+1);
    for(int i = 1; i <= n; i++)
    {
        if(tmp>=Time)
            break;
        dem++;
        tmp += a[i];
        s.insert(a[i]);
    }
    cout << dem;
    for(int i = 1; i <= n; i++)
    {
        if(s.empty())
            break;
        if(s.count(b[i]))
        {
            
            s += b[i];
        }
    }
    return 0;
}