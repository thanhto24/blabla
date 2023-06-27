#include <iostream>

using namespace std;

int n, m;
int B[22], C[22];

void enter()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++) cin >> B[i];
    for(int i=1;i<=m;i++) cin >> C[i];
}
void solve()
{
    int i=1, j=1;
    while(i <= n && j <= m)
    {
        if(B[i]<=C[j])
        {
            cout << "b" << i << " ";
            i++;
        }
        else cout << "c" << j << " ", j++;
    }
    while( i <= n) cout << "b" << i << " ", i++;
    while( j <= m) cout << "c" << j << " ", j++;
}

int main()
{
    enter();
    solve();
    return 0;
}
