#include <iostream>
#include <math.h>
#include <set>
#include <string.h>

using namespace std;

int n;
set <int> s;
bool was[100005];

bool check(int k)
{
    if(was[k]==true) return false;
    return true;
}
void enter()
{
    cin >> n;
    memset(was,false,sizeof(was));
}
void dfs(int x)
{
    was[x]=true;
    for(int i=1;i<=sqrt(x);i++)
    {
        if(x%i==0&&check((i-1)*((x/i)+1)))
        {
            s.insert((i-1)*((x/i)+1));
            dfs((i-1)*((x/i)+1));
        }
    }
}
void solve()
{
    dfs(n);
    cout << s.size() << endl;
    for(auto x: s)
        cout << x << " ";
}
int main()
{
    enter();
    solve();
    return 0;
}
