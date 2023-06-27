#include <iostream>
#include <math.h>
using namespace std;

int t,n,res;

int getbit(int n, int i)
{
    return (n>>i)&1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while(t--)
    {
        cin >> n;
        res=0;
        double a=log(n)/log(2);
        for(int i=a;i>=0;i--)
        {
            if(!getbit(n,i)) res+=pow(2,i);
        }
        if(n==0) res=1;
        cout << res << endl;


    }
    return 0;
}
