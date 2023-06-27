#include <bits/stdc++.h>

using namespace std;

string s;
int x,dem[200005], m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    cin >> m;
    for(int i = 1; i <= m; i++)
    {
        cin >> x;
        dem[x]++;
    }
    for(int i = 1; i <= s.size()/2; i++)
    {
        dem[i] += dem[i-1];
        if(dem[i]&1) swap(s[i-1],s[s.size()-i]);
    }
    cout << s;
    return 0;
}