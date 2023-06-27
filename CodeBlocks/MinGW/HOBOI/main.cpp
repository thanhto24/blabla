#include <iostream>

using namespace std;
int n,m,ok,res=0,dem=0;
char a[102][102];
int main()
{
    cin >> m >> n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin >> a[i][j];
      for(int i=1;i<=m;i++)
       {
           ok=0;
            for(int j=1;j<=n;j++)
            {
                if(a[i][j]!='.'&&ok!=1)
                    ok=1;
                if(ok==1&&a[i][j]=='.') res++;
                if(a[i][j]!='.') dem++;
            }
       }
       cout << res+dem/2;
    return 0;
}
