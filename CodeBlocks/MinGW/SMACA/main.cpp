#include <iostream>
#include <set>

using namespace std;

int m, n, res;
int a[105][9];
int k[105];
int tmp[9];
multiset <int> ms[105];
void enter()
{
    cin >> m >> n;
    for( int i = 1; i <= m; i++)
        cin >> k[i];
    for( int i = 1; i <= n; i++)
        for( int j = 1; j<= m; j++)
            {
                cin >> a[i][j];
                ms[i].insert(a[i][j]);
            }
}

void solve()
{
    for( int i = 1; i <= n; i++)
    {
        for( int j = 1; j <= m; j++)
        {
                for( int t = 1; t <= m; t++)
            {
                    if((k[j]%a[i][t])==0&&a[i][t]!=0)
                {

                    ms[i].erase(a[i][t]);
                }
            }
        }
        cout << ms[i].size() << endl;
    }
    for( int i = 1; i <= n; i++)
        if(ms[i].size()==0)
            res++;
    cout << res << endl;
    for( int i = 1; i <= n; i++)
        if(ms[i].size()==0) cout << i << " ";

}
int main()
{
    enter();
    solve();
    return 0;
}
