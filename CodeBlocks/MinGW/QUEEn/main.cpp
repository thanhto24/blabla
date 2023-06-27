#include <iostream>

using namespace std;

bool was[10][10];
int res=1;
bool can(int a, int b)
{
    if(a<1||b<1||a>8||b>8) return false;
    return true;
}
void tick(int y, int x)
{
    for(int i=1;i<=8;i++) was[i][x]=false,was[y][i]=false;
    for(int i=1;i<=8;i++)
    {
         if(can(y+i,x+i)) was[y+i][x+i]=false;
          if(can(y+i,x-i)) was[y+i][x-i]=false;
           if(can(y-i,x-i)) was[y-i][x-i]=false;
            if(can(y-i,x+i)) was[y-i][x+i]=false;
    }
    was[y][x]=true;
}
bool check(int y, int x)
{
    for(int i=1;i<=8;i++)
        if(was[y][i]==false||was[i][x]==false) return false;
     for(int i=1;i<=8;i++)
    {
         if(can(y+i,x+i)) if(!was[y+i][x+i]) return false;
          if(can(y+i,x-i)) if(!was[y+i][x-i]) return false;
           if(can(y-i,x-i)) if(!was[y-i][x-i]) return false;
            if(can(y-i,x+i)) if(!was[y-i][x+i]) return false;
    }
    return true;
}
void solve(int y, int x)
{
   while(res<8)
   {
       for(int i=x;i<=8;i++)
        for(int j=1;j<=8;j++)

   }
}
int main()
{
    memset(was,true,sizeof(was));
    cin >> y1 >> x1;
    tick(y1,x1);
    solve(y1,x1);
    return 0;
}
