#include <iostream>
#include <algorithm>
using namespace std;

int n, a[100005];

bool dao(int a, int b)
{
    return a > b;
}
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a+1,a+n+1,dao);
    for(int i = 1; i <= n; i++)
    {
//        cout << a[i] << endl;
        if(a[i]!=a[1]) return cout << a[i], 0;
    }
    cout << 0;
    return 0;
}
