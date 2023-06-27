#include <bits/stdc++.h>

using namespace std;

int n,c,k,a[1000007];
bool ok = false;
multiset <int> s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k >> c;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= k; i++)
    {
        s.insert(a[i]);
    }
    for(int i = 1; i <= n - k + 1; i++)
    {
        if(i!=1)
        {
            s.erase(s.find(a[i-k+1]));
            s.insert(a[i]);
        }
        cout << *s.begin() << " " << *s.end() << endl;
        if(*s.end()-*s.begin()<=c) cout << i << endl, ok = true;
    }
    if(!ok) cout << "NONE";
    return 0;
}