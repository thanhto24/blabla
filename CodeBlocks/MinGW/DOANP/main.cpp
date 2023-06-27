
#include <bits/stdc++.h>

using namespace std;
typedef pair<int,bool> pib;
int n,a,b,c=1,ans=0,A,B;
int main()
{
    cin>>n>>A>>B;
    vector<pib> x(2*n);
    for(int i=0;i<n;++i)
    {
        cin>>a>>b;
        x[2*i] = {a,0};
        x[2*i+1] = {b,1};
    }
    sort(x.begin(),x.end());
    for(int i=0;i<2*n;i++) cout << x[i].first << endl;
    for(int i=1;i<2*n;++i)
    {
        if(c)ans+=x[i].first-x[i-1].first;
        if(x[i].second) --c; else ++c;
    }
    cout<<ans;
}
