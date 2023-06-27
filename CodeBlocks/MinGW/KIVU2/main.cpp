#define ii pair <int, int>
#define f first
#define s second
#define mp make_pair
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,k;
int A[100005], B[100005];
vector <ii> A1, B1, A2, B2;

bool cmp( ii a, ii b)
{
    return (a.f<b.f);
}
void enter()
{
    cin >> n;
    for( int i = 1; i <= n; i++)
    {
        k=0;
        cin >> A[i];
        if(A[i]<0)
        {
            A[i]*=-1;
            k=1;
        }
        if(k==0)
        A1.push_back(mp(A[i],k));
        else
        A2.push_back(mp(A[i],k));
    }
    for( int i = 1; i <= n; i++)
    {
        k=0;
        cin >> B[i];
        if(B[i]<0)
        {
            B[i]*=-1;
            k=1;
        }
        if(k==0)
        B1.push_back(mp(B[i],k));
        else
        B2.push_back(mp(B[i],k));
    }
}
int cal( vector <ii> a, vector <ii> b)
{

    int x=a.size();
    int y=b.size();
    int tmp=max(x,y);
    int o=0,p=0,res=0;
    while(tmp>0&&o<x&&p<y)
    {
        if(a[o].f<b[p].f)
        {
            res++;
            o++;
            p++;
        }
        else p++;
        tmp--;
    }
    return res;

}
void solve()
{
    sort(A1.begin(),A1.end(),cmp);
    sort(A2.begin(),A2.end(),cmp);
    sort(B1.begin(),B1.end(),cmp);
    sort(B2.begin(),B2.end(),cmp);
    int ans1, ans2;
    ans1=cal(A1,B2);
    ans2=cal(B1,A2);
    cout << ans1+ans2;
}


int main()
{
    enter();
    solve();
    return 0;
}
