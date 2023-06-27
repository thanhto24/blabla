#include <iostream>

using namespace std;

int main()
{
    long long n, x, mx, res = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        mx = max(mx, x);
        res += x;
    }
    if(res&1||mx<=res-mx)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}