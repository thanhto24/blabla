#include <iostream>

using namespace std;

int X, res=0;

void enter()
{
    cin >> X;
}
void solve()
{
    for(int i=1;i<=X/2;i++)
    {
        if(X%i==0)
        {
            if(X/i<=i&&i%(X/i)==0)
            {
                res=i;
                break;
            }
        }
    }
    if(res==0) res=X;
    cout << res;
}
int main()
{
    enter();
    solve();
    return 0;
}
