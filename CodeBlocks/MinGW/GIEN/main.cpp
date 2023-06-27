#include <iostream>
#include <vector>
#include <set>
using namespace std;
int n,a[100],ans=0;
char s1[100],s2[100];
vector <char> adj[1000];
set <string> kq;
void insertt(int k)
{
    for(int i=0;i<n;i++)
        if(a[i]==0) adj[k].push_back(s1[i]);
        else adj[k].push_back(s2[i]);
}
void lkeNP(int k)
{
    if(k==n)
    {
        ans++,insertt(ans);
    }
    else{
        for(int i=0;i<=1;i++)
        {
            a[k]=i;
            lkeNP(k+1);
        }
    }
}
void solve()
{
    int dem=0;

    for(int i=1;i<=ans;i++)
    {
        string S;
        for(char x:adj[i])
        {
            S+=x;
        }
        kq.insert(S);

    }
    cout << kq.size() << endl;
    for(auto x: kq) cout << x << endl;
}
int main()
{
    cin >> n;
    for(int i=0;i<n;i++) cin >> s1[i];
    for(int i=0;i<n;i++) cin >> s2[i];
    lkeNP(0);
    solve();
    return 0;
}
