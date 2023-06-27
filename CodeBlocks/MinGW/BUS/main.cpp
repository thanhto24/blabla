#include <iostream>

using namespace std;

int n;
char a[100][100];
void xuat()
{
    cout << "+";
    for(int i=1;i<=24;i++) cout << "-"; cout << "+" << endl;
    for(int i=1;i<=4;i++)
    {
        for(int j=0;j<=26;j++)
        {
            if(j<26) cout << a[i][j];
            else
            {
                if(i==1||i==4) cout << ")";
            }
        }
        cout << endl;
    }
    cout << "+";
    for(int i=1;i<=24;i++) cout << "-"; cout << "+" << endl;
}
void ktao()
{
    for(int i=1;i<=4;i++)
        for(int j=0;j<=25;j++)
    {

            if(i==3)
            {
            if(j==1) a[i][j]='#';
            else a[i][j]='.';
            }
            else
            {
            if(j%2!=0) a[i][j]='#';
            else a[i][j]='.';
            }
            if(j==23&&i!=3) a[i][j]='|';
            if(j==23&&i==3) a[i][j]='.';
            if(i==1&&j==24) a[i][j]='D';
            if(j==0||j==25) a[i][j]='|';

    }
}
void solve()
{
    for(int j=1;j<25;j++)
    {
        for(int i=1;i<=4;i++)
            if(a[i][j]=='#')
        {
            a[i][j]='O';
            n--;
            if(n==0) return;
        }
    }

}
int main()
{
    ktao();
    cin >> n;
    if(n!=0) solve();
    xuat();
    return 0;
}
