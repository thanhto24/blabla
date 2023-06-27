#include <iostream>

using namespace std;
long long n,tmp=1,key=1,pos,res;
string s;
void solve(long long n)
{
    if(n<10) return cout << n, void();
    while(n>0)
    {
        if(n-(9*tmp*key)<=0) break;
        n-=9*tmp*key;
        tmp*=10;
        key++;
    }
    long long keyy=key-1;
    tmp=1;
    while(keyy--)
    {
        tmp*=10;
    }
    tmp-=1;
    pos=n%key;
    res=n/key;
    res+=tmp;
    if(pos!=0) res++;
    int ans=0,tmp=key-pos+1;
    if(pos==0) tmp=1;
    while(tmp--)
    {
        ans=res%10;
        res/=10;
    }
    cout << ans;
}
int main()
{
    cin >> n;
    solve(n);
    return 0;
}
