#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, tmp;
    while(true)
    {
        cin >> tmp;
        cin >> a >> b;
        a *= tmp;
        b *= tmp;
        cout << sqrt(a*b) << endl;
    }
    return 0;
}