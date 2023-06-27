#include <iostream>

using namespace std;

int a[10004];
int main()
{
    int n,k,tmp;
    long long res=0;
    cin >> n >> k;
    tmp=n%k;
    for(int i=1;i<=k;i++)
    {
        a[i]=n/k;
        if(tmp>0)
        {
            a[i]++;
            tmp--;
        }
    }
    for(int i=1;i<=k;i++)
    {
        tmp+=a[i];
        res+=(n-tmp)*a[i];
    }
    cout << res;
    return 0;
}
