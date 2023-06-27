#include <iostream>
using namespace std;
int main()
{
    int Num, One_hand;
    double res;
    cout << "Nhap 1 tay: ";
    cin >> One_hand;
    while(true)
    {
        cout << "Nhap Num: ";
        cin >> Num;
        if(Num==1||Num==3)
            res += One_hand * 2.8;
        if(Num==2)
            res += One_hand * 1.6;
        if(!Num)
            res -= 30;
        else 
            res -= 20;
        cout << res << endl;
    }
}