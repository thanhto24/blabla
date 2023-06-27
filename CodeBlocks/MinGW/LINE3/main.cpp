#include <iostream>
#include <queue>
#include <stack>
#include <string.h>
#define ii pair <int, int>
#define f first
#define s second
#define mp make_pair

using namespace std;

int n, sx, sy, dx, dy;
int delx[4]={1,-1,0,0};
int dely[4]={0,0,1,-1};
int a[33][33];
ii trace[33][33];
bool was[33][33];

bool check( int x, int y)
{
    if(x<1||x>n||y<1||y>n) return false;
    if(was[x][y]==true) return false;
    if(a[x][y]==1) return false;
    return true;
}
void enter()
{
    cin >> n >> sx >> sy >> dx >> dy;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        cin >> a[i][j];
    memset(was,false,sizeof(was));
}
void bfs(int x, int y)
{
    queue <ii> q;
    q.push({x,y});
    was[x][y]=true;
    while(!q.empty())
    {
            ii top=q.front();
            q.pop();
         for(int i=0; i <=3 ;i++)
        {
            int X=top.f+delx[i];
            int Y=top.s+dely[i];
            if(check(X,Y)==true)
            {
               // cout << X << " " << Y << endl;
                trace[X][Y]=mp(top.f,top.s);
                q.push({X,Y});
                was[X][Y]=true;
            }
        }
    }
}
void Tracepath()
{
    ii S=mp(sx,sy), F=mp(dx,dy);
    stack <ii> path;
    while(S!=F)
    {
        path.push(F);
        F = trace[F.f][F.s];
    }
    path.push(F);
    cout << path.size() << endl;
    while(!path.empty())
    {
        cout << path.top().f<< " " << path.top().s << endl;
        path.pop();
    }
}
void solve()
{
    bfs(sx,sy);
    if(was[dx][dy]==1) Tracepath();
    else cout << "0";
}
int main()
{
    enter();
    solve();
    return 0;
}
