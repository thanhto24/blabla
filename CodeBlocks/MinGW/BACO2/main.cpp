#include <iostream>

using namespace std;
int TT, XX;
bool dat[10][10], was[10][10];
int xt[10], yt[10], xx[10], yx[10],res=0;
bool check(bool dat, int y, int x, int direct)
{
    if(!dat)
    {
        if(direct==1)
            if(y>0&&x<=8) return true;
        if(direct==2)
            if(y<=8&&x<=8) return true;
        if(direct==3)
            if(y<=8&&x>0) return true;
        if(direct==4)
            if(y>0&&x>0) return true;
    }
    return false;
}
void enter()
{
    cin >> TT >> XX;
    for(int i=1;i<=TT;i++)
        cin >> yt[i] >> xt[i], dat[yt[i]][xt[i]]=true,was[yt[i]][xt[i]]=true;
    for(int i=1;i<=XX;i++)
        cin >> yx[i] >> xx[i], dat[yx[i]][xx[i]]=true,was[yx[i]][xx[i]]=true;
}
void solve()
{
    //check xe
    for(int xe=1;xe<=XX;xe++)
    {
        int i=yx[xe];
        while(true)
        {
            i--;
            if(!dat[i][xx[xe]]&&i>0) was[i][xx[xe]]=true;
            else break;
        }
        i=yx[xe];
        while(true)
        {
            i++;
            if(!dat[i][xx[xe]]&&i<=8) was[i][xx[xe]]=true;
            else break;
        }
        i=xx[xe];
        while(true)
        {
            i--;
            if((!dat[yx[xe]][i]&&i>0)) was[yx[xe]][i]=true;
            else break;
        }
        i=xx[xe];
        while(true)
        {
            i++;
            if( !dat[yx[xe]][i]&&i<=8) was[yx[xe]][i]=true;
            else break;
        }

    }
    //check tuong
    for(int tu=1;tu<=TT;tu++)
    {
        for(int dem=1;dem<=4;dem++)
        {
            int i=yt[tu];
            int j=xt[tu];
            while(true)
            {
                if(dem==1)
                {
                    j++;i--;
                }
                if(dem==2)
                {
                    i++;j++;
                }
                if(dem==3)
                {
                    i++;j--;
                }
                if(dem==4)
                {
                    i--;j--;
                }
                if(check(dat[i][j],i,j,dem)) was[i][j]=true;
                else break;
            }
        }
    }

    for(int i=1;i<=8;i++)
    {
        for(int j=1;j<=8;j++)
            if(was[i][j]==true) res++;

    }
    cout <<  res;
}
int main()
{
    enter();
    solve();
    return 0;
}
