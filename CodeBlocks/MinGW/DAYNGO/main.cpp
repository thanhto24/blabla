#include <iostream>

using namespace std;

int n, a[30];
int res=0;
bool check()
{
    int mo=0;
    int i=0;
    while(i<n)
    {
        if(a[i]==0)
        {
            mo++;
        }
        else
        {
            if(mo==0)
                return false;
            else
                mo--;
        }
        i++;
    }
        if(mo==0)
            return true;
        else return false;
}
void xuat()
{
    for(int i=0;i<n;i++)
        if(a[i]==0) cout << '(';
        else cout << ')';
        cout <<endl;
}


void lkeNP(int k)
{
    if(k==n)
        {
            if(check())
            {
                res++;
                xuat();
            }
        }
    else
        for(int i=0;i<=1;i++)
    {
        a[k]=i;
        lkeNP(k+1);
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    lkeNP(0);
    cout << res;
    return 0;
}
