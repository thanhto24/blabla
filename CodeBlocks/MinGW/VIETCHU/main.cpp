#include <iostream>

using namespace std;

int n;

void dv(int x)
{
    switch(x)
    {
        case 0:{cout << "khong "; break;}
        case 1:{cout <<"mot ";break;}
        case 2:{cout <<"hai ";break;}
        case 3:{cout << "ba ";break;}
        case 4:{cout << "bon ";break;}
        case 5:{cout << "nam ";break;}
        case 6:{cout << "sau ";break;}
        case 7:{cout << "bay ";break;}
        case 8:{cout << "tam ";break;}
        case 9:{cout << "chin ";break;}
    }
}
void chuc(int x)
{
    if(x>9&&x<20)
    {
        cout << "muoi ";
        if(x%10!=0)
            if(x%5==0) cout << "lam ";
            else dv(x%10);
    }
    else{
        dv(x/10);
        cout <<"muoi ";
         if(x%10!=0)
            if(x%5==0) cout << "lam ";
            else dv(x%10);
    }
}
void tram(int x)
{
    dv(x/100);
    cout << "tram ";
    if(x%100!=0)
    {
        if(x%100<10)
        {
            cout << "le ";
            dv(x%100);
        }
        else chuc(x%100);
    }

}
void nghin(int x)
{
    int tmp=x%1000;
    x/=1000;
    if(x<10) dv(x);
    if(x>9&&x<100) chuc(x);
    if(x>99&&x<1000) tram(x);
    cout << "nghin ";
    tram(tmp);

}
int main()
{
    cin >> n;
    if(n<10) dv(n);
    if(n>9&&n<100) chuc(n);
    if(n>99&&n<1000) tram(n);
    if(n>999) nghin(n);
//    solve();
    return 0;
}
