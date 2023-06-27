#include <iostream>

using namespace std;

int F[100];
long long n;

int rev(int x)
{
    int tmp=0;
    while(x>0)
    {
        tmp*=10;
        tmp+=x%10;
        x/=10;
    }
    return tmp+2;
}
void init()
{
    F[0]=8;
    F[1]=10;
    int i=2,res=1,x;
    while(true)
    {
        x=res;
        res=rev(x);
        F[i]=res;
        if(res==10) break;
        i++;
    }
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0), cout.tie(0);
    cin >> n;
    if(n==1) return cout << 1,0;
    init();
    cout << F[n%81];
    return 0;
}
