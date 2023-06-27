#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, S, ans;
    int n;
    cin >> s >> S;
    cin >> n;
    if(S.size()%s.size()!=0) return cout << "NO", 0;
    if(S.size()/s.size()!=n) return cout << "NO", 0;
    for(int i = 1; i <= n; i++)
        ans = ans + s;
    if(ans!=S) return cout << "NO", 0;
    cout << "YES";
    return 0;
}