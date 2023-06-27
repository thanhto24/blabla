#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e5 + 5;

int n, q, x;
bool was[maxN], face[maxN];
vector <int> tmp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> q;
    for(int i = 1; i <= q; i++)
    {
        cin >> x;
        tmp.push_back(x);
        was[x] = true;
    }
    for(int i = tmp.size() - 1; i >= 0; i--)
    {
        if(!face[tmp[i]])
        {
            cout << tmp[i] << endl;
            face[tmp[i]] = true;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(!was[i])
            cout << i << endl;
    }
    return 0;
}