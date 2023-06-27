#include <bits/stdc++.h>

using namespace std;

int n, tmp, dem = 0;
char x;
char f[5];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        f[x] ++;
    }
    if(f['U']<f['D'])
        swap(f['U'],f['D']);
    if(f['R']<f['L'])
        swap(f['L'],f['R']);
    tmp = (f['R']-f['L'])/2;
    if((f['R']-f['L'])%2!=0)
    f['D']++,
    dem++,
    f['R']--;
    f['R'] -= tmp;
    f['L'] += tmp;
    dem += tmp;
    if((f['U']-f['D'])%2!=0) return cout << -1, 0;
    tmp = (f['U']-f['D'])/2;
    dem += tmp;
    cout << dem;
    return 0;
}