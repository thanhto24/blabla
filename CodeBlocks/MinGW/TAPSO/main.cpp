#include <iostream>
#include <set>
using namespace std;
int n,res=0;
string s;
set <long long> kq;
void solve()
{
    long long S;
    for(int len=0;len<n;len++)
    {
        for(int i=0;i<n;i++)
           {
                S=0;
                for(int j=0;j<n;j++)
                {
                    if(j<i||j>=i+len)
                    {
                        S*=10;
                        S+=s[j]-'0';
                    }
                }
                kq.insert(S);
           }
    }
    S=0;
    for(int i=0;i<n;i++)
    {
            S*=10;
            S+=s[i]-'0';
    }
    kq.insert(S);
    for(auto x:kq)
    {
        if(x%3==0) res++;
    }
    cout << res;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
    cin >> s;
    n=s.size();
    solve();
    return 0;
}
