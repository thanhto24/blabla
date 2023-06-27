#include <iostream>
#include <algorithm>
using namespace std;

int T;
int a[5];

int main()
{
    cin >> T;
    while(T--)
    {
        long long res=0;
        for(int i=1;i<=3;i++)
            cin >> a[i];
        sort(a+1,a+3+1);
        res=a[2]*2;
        if(a[3]>a[2]) res++;
        cout << res << endl;
    }
    return 0;
}
