#include <iostream>

using namespace std;

int a, b;

void enter()
{
    cin  >> a >> b;

}
void solve()
{
    cout << (a*b)%2+1;
}
int main()
{
    enter();
    solve();
    return 0;
}
