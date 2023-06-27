#include <iostream>
#include <queue>
#include <vector>
#include <string.h>
using namespace std;

int n,a[100][100],b[100][100],f[100],ok;
vector <int> q[100];

void enter()
{
    cin >> n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin >> a[i][j];
}
void solve()
{
    for(int j=1;j<=n;j++)
    {
        int ok=0;
        for(int i=n;i>0;i--)
        {
            if(a[i][j]!=0)
            {
                q[j].push_back(a[i][j]);
                if(ok==0)
                {if(*q[j].end()==a[i][j])
                {
                    q[j].pop_back();
                    q[j].pop_back();
                    q[j].push_back(a[i][j]*2);
                    ok=j;
                }
                }
                if(ok!=j)
                    ok=0;
            }
        }

    }
    for(int j=1;j<=n;j++)
    {
        int i=n;
        while(!q[j].empty())
        {
            b[i][j]=q[j].front();
            q[j].pop_back();
            i--;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    enter();
    solve();
    return 0;
}
