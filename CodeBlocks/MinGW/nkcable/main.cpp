#include <bits/stdc++.h>

using namespace std;

int n;

int calc(int x)
{
    int res = 0;
    while(x>0)
    {
        res += x%10;
        x /= 10;
    }
    return res;
}
int main()
{
    cin >> n;
    while(true)
    {
        if(calc(n)%4==0) return cout << n, 0;
        n++;
    }
    return 0;
}
