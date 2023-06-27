#include <iostream>

using namespace std;

long long l,r;
bool check(int n)
{
    int L,F;
    if(n<10) return true;
    L=n%10;
    while(n>0)
    {        n/=10;
        if(n>0)
        F=n;
    }
    return L==F;
}

long long countt(long long n)
{
    long long nn=n, res=0,key=0,F,L,tmp=1,cal;
    if(n<10) return n;
    L=n%10;
    while(n>0)
    {
        key++;
        n/=10;
        if(n>0)
        F=n;
    }
    for(int i=1;i<key;i++)
    {
        tmp*=10;
        if(i==1||i==2) tmp=1;
        res+=9*tmp;
    }
    if(key==2)
        res+=nn/11;
    else
    {

        tmp=1;
        for(int i=1;i<key;i++)
            tmp*=10;
        res+=(F-1)*9;
        cal=(nn%tmp)/10;
        if(F<=L)
            res+=cal+1;
    }
    return res;

}
void solve()
{
    long long ans= countt(r)-countt(l);
    if(check(l)) ans++;
    cout << ans;
}
int main()
{
    cin >> l >> r;
    solve();
    return 0;
}
