#include <iostream>
#include <algorithm>
using namespace std;

int n,k;
int a[100005];
long long res=0;

int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+n+1);
    int tmp=1,sl=n;
    while(sl>1)
    {
        if(a[tmp]==1)
            sl-=2, res++;
        else
        {
            if(sl-a[tmp]-1>=1)
            {
                res+=a[tmp];
                sl-=(a[tmp]+1);
            }
            else
            {
                res+=sl-1;
                break;
            }

        }
        tmp++;
    }
    cout << res;
    return 0;
}
