#include <iostream>
#include <string.h>
using namespace std;
int b[8][8];
char a[8][8];
int res=0;
void taomatran()
{
    memset(b,0,sizeof(b));
    b[1][3]=b[1][5]=b[2][2]=b[2][6]=b[3][1]=b[3][7]=b[5][1]=b[5][7]=b[6][6]=b[6][2]=b[7][3]=b[7][5]=6;
    b[1][4]=b[2][3]=b[2][5]=b[3][2]=b[3][6]=b[4][1]=b[4][7]=b[7][4]=b[6][3]=b[6][5]=b[5][2]=b[5][6]=7;
    b[2][4]=b[3][3]=b[3][5]=b[4][2]=b[4][6]=b[5][3]=b[5][5]=b[6][4]=8;
    b[3][4]=b[4][3]=b[4][5]=b[5][4]=9;
    b[4][4]=10;
}
void solve()
{
    for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=7;j++)
            if(a[i][j]>'0'&&a[i][j]<='9') res+=b[i][j]*(a[i][j]-'0');
    }
    cout << res;
}
int main()
{
    taomatran();
    for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=7;j++)
            cin >> a[i][j];
    }
    solve();
    return 0;
}
