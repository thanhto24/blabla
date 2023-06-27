#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e5 + 5;

set <int> s;
int T, u, k;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    while(T--)
    {
        bool found = false;
        cin >> u >> k;
        for(int i = 1; i <= u; i++)
        {
            if(u%i==0)
            {
                k--;
                if(k==0)
                {
                    cout << i << endl;
                    found = true;
                    break;
                }
            }
        }
        if(!found)
            cout << -1 << endl;
    }
    return 0;
}