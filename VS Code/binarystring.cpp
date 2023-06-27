#include <bits/stdc++.h>

using namespace std;

void solve(string s)
{
    int dem = 0, start, res = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i]=='1')
        {
            dem++;
            if(dem==1)
                start = i;
            if(dem>1)
            {
                res += i - start - 1;
                start = i;
            }
        }
    }
    if(dem==0) cout << -1;
    else cout << res;
    cout << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--)
    {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}