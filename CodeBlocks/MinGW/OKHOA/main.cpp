#include <iostream>
#include <math.h>
using namespace std;

long long n,k,res;
int main()
{
    cin >> n;
    k=1;
    while(n>1)
    {
        res+=n*k-k;
        n--;
        k++;
    }
    res+=k;
    cout << res;
    return 0;
}
