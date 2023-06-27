#include <iostream>

using namespace std;
int T,a1,a2,b1,b2,c1,c2;
long long D,Dx,Dy;
bool check()
{
    if(a1==0&&a2==0&&b1==0&&b2==0&&c1==0&&c2==0) return true;
    if(a1==0&&b1==0&&c1==0) return false;
    if(a2==0&&b2==0&&c2==0) return false;
    if(a1==0&&b1==0) return false;
    if(a2==0&&b2==0) return false;
    return true;
}
int main()
{
    cin >> T;
    while(T--)
    {
        cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
        D=a1*b2-a2*b1;
        Dx=c1*b2-c2*b1;
        Dy=a1*c2-a2*c1;
        if(D==0)
        {
            if((Dx==0&&Dy==0)&&check()==true) cout << "INFINITE" << endl;
            else cout << "NO SOLUTION" << endl;
        }
        else{
            if(abs(Dx)%D==0&&abs(Dy)%D==0) cout << Dx/D << " " << Dy/D << endl;
            else {
                if(check) cout << "INFINITE" << endl;
                else cout << "NO SOLUTION" << endl;
            }
        }
    }
    return 0;
}
