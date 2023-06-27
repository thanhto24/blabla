#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e7+7;

int main()
{
    int l, r, res = 0;
    cin >> l >> r;
    for(int i = max(l, 12); i <= r; i++)
    {
        if(i==50) continue;
        if(i%6==0&&i%10!=0) res++;
        if(i%10==0) res++;
    }
    cout << res;
    return 0;
}
