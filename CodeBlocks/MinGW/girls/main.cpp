#include <iostream>
#include <algorithm>

using namespace std;

long long res1 = 0, res2 = 0, n, tmp;

int main()
{
    cin >> n;
    while(n--)
    {
        cin >> tmp;
        if(tmp < 0) res1++;
        if(tmp > 0) res2++;
        if(tmp == 0) return cout << -1,0;
    }
    cout << max(res1, res2);
    return 0;
}
