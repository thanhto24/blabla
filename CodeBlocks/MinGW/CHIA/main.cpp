#include <iostream>

using namespace std;

int n;

void xuat(int key,int sl,int N)
{
    cout << "1";
    for(int i=1;i<N-sl;i++)
        cout << "0";
    cout << key;
    return;
}
int main()
{

    cin >> n;
    int N=n;
    int key,sl=1;
    if(n==1) return cout << "-1",0;
    if(n==2) return cout << "21",0;
    n%=6;
    if(n<3) n+=6;
    if(n==3) key=5;
    if(n==5) key=17,sl=2;
    if(n==4) key=8;
    if(n==6) key=2;
    if(n==7) key=20,sl=2;
    if(n==8) key=11,sl=2;
    xuat(key,sl,N);
        return 0;
}
