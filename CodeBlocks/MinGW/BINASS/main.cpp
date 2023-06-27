#include <iostream>

using namespace std;

int n,stop;
int a[50];

void ktao()
{
    for(int i = 1;i <= n; i++)
        a[i]=0;
}
void sinhnp()
{
    int i=n;
    while(i>=1&&a[i]==1)
    {
        a[i]=0;
        i--;
    }
    if(i==0)
        stop=1;
    else a[i]=1;
}
int main()
{
    cin >> n;
    ktao();
    stop=0;
    while(stop==0)
    {
        for(int i=1;i<=n;i++)
            cout << a[i];
        cout << endl;
        sinhnp();
    }

}
