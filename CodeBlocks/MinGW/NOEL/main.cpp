#include <iostream>

using namespace std;
int n,ng,doc,center,tmp;
char a[200][200];
int main()
{
    cin >> n;
    doc=3*n+3;
    ng=2*(n+2)-1;
    center=(ng+1)/2;
    for(int i=1;i<=doc;i++)
        for(int j=1;j<=ng;j++)
            a[i][j]='.';
    int dem=n,cur=1;
    for(int h=1;h<=3;h++)
    {
        for(int i=cur;i<=dem;i++)
        {
            for(int j=1;j<=ng;j++)
            {
                tmp=i-cur;
                if(tmp==0&&j==center)
                    a[i][j]='#';
                else
                {
                    if(tmp!=0)
                    {

                        if(j>center-tmp&&j<center+tmp) a[i][j]='x';
                        if(j==center-tmp||j==center+tmp) a[i][j]='#';
                    }
                }

            }
        }
        cur=dem+1;
        dem+=n+h;
    }
    for(int i=1;i<=doc;i++)
       {
            for(int j=1;j<=ng;j++)
                cout << a[i][j];
            cout << endl;
       }
    return 0;
}
