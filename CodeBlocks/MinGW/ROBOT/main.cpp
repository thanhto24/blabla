#include <iostream>

using namespace std;
char check(int x1, int y1, int x2, int y2)
{
    int tmpx=x2-x1;
    int tmpy=y2-y1;
    char direct;
    if(tmpx==0&&tmpy==1) return direct='t';
    if(tmpx==0&&tmpy==-1) return direct='b';
    if(tmpx==1&&tmpy==0) return direct='r';
    if(tmpx==-1&&tmpy==0) return direct='l';
}
bool checkdirect(char tmp1, char tmp2)
{
    if((tmp1=='t'&&tmp2=='r')||(tmp1=='b'&&tmp2=='l')||(tmp1=='l'&&tmp2=='t')||(tmp1=='r'&&tmp2=='b')) return true;
    return false;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int x[n+1],y[n+1];
    for(int i=1;i<=n;i++) cin >> x[i] >> y[i];
    int res=0;
    char tmpp1,tmpp2;
    for(int i=2;i<=n;i++)
    {
        tmpp2=check(x[i-1],y[i-1],x[i],y[i]);
        if(checkdirect(tmpp1,tmpp2)) res++;
        tmpp1=tmpp2;
    }
    cout << res;
    return 0;
}
