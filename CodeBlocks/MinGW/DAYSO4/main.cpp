#include <iostream>
int n;
using namespace std;
void solve(){
    if(n<=10) cout << n;
    if(n==11) cout << 22;
    if(n>11&&n<19)
    {
        cout << (n%10)+1 << n%2;
    }
    if(n>=19&&n<=27)
    {
        cout << n%18 << n%2 << n%2;
    }
    if(n>=28)
    {
        int tmp;
        tmp=(n-28)/8;
        tmp+=3;
        n=(n-28)%8;
        n+=2;
        cout << n;
        for(int i=1;i<=tmp;i++)
            cout << n%2;
    }
}
int main()
{
    cin >> n;
    solve();
    return 0;
}
