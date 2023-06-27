#include <iostream>
#include <set>

using namespace std;

int n;
long long k1, k2, res;
int a;

int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a;
        if(a%2==0)
            k1++;
        else k2++;
    }
    res=k1*k2;
    cout << res;
    return 0;
}
