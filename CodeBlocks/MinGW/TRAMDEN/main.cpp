#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;
ll k,n,tmp,minn[10],maxx[10],dem=0;
int main()
{
    cin >> k;
    if(k<4) return cout << "-1",0;
    k*=2;
    tmp=(sqrtl(k));
    for(ll i=tmp;i>0;i--)
    {
        if((k-i-1)%(2*i+1)==0&&((k-i-1)/(2*i+1)-i)%2!=0)
       {
            dem++;
            minn[dem]= min(i,(k-i-1)/(2*i+1));
            maxx[dem]=max(i,(k-i-1)/(2*i+1));
            if(dem==4) break;
       }
    }
    ll MIN=minn[dem],MAX=maxx[dem];
    if(dem>0)
    {
        for(int i=1;i<=dem;i++)
        {
            if(MAX-MIN>=maxx[i]-minn[i])
                {
                    MAX=maxx[i];
                    MIN=minn[i];
                }
        }
          return cout << MIN << " "<< MAX,0;
    }

    cout << "-1";
    return 0;
}
