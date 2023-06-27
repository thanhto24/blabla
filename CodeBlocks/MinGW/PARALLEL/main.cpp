#include <iostream>

using namespace std;

int n;
bool check( int x, int y)
{
    if( x <= 1 && y <= 2) return true;
    if( x <= 2 && y <= 1) return true;
    return false;
}
int main()
{
    cin >> n;
    int x,y;
    for( int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        if(check(x,y)) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
