#include <bits/stdc++.h>

using namespace std;

int a, b, c;

int main()
{
    cin.tie(0) -> sync_with_stdio(0);
    cin >> a >> b >> c;
    int f[100] = {0}, mx = -1, res;
    for(int i = 1; i <= a; i++)
        for(int j = 1; j <= b; j++)
            for(int k = 1; k <= c; k++)
                f[i+j+k]++;
    for(int i = 1; i <= a + b + c; i++)
    {
        if(f[i]>0)
        {
            //  cout << i << " " << f[i] << endl;
             if(f[i]>mx)
             {
                mx = f[i];
                res = i;
             }
        }
    }
    cout << res;
    return 0;
}