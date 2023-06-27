#include <iostream>

using namespace std;

int x, f[5];

void enter()
{
    for(int i=1;i<=10;i++)
    {
        cin >> x;
        f[x]++;
    }
}
void solve()
{
    if(f[1]%4==0) cout <<"0";
    else cout << "1";
}
int main()
{
    enter();
    solve();
    return 0;
}
