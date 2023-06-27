#include <bits/stdc++.h>

using namespace std;

int f[1000000];

void check(int i)
{
    int tmp = i;
    for(int j = 1; j < i; j++)
        if(i%j==0) tmp -= j;
    f[abs(tmp)]++;
    cout << abs(tmp) << " " << f[abs(tmp)] <<  endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i = 1; i <= 1e3; i++)
    {
       cout << i << " ";
       check(i);
    }
    return 0;
}