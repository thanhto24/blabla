#include <iostream>

using namespace std;
int n,a[1000];
int main()
{
    cin >> n;
    if(n==1) return cout << "-1",0;
    for(int i=n;i>0;i--) a[i]=i;
    for(int i=1;i<n;i++)
        for(int j=i;j<n;j++)
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);
        swap(a[1],a[2]);
    for(int i=1;i<=n;i++) cout << a[i];
    return 0;
}
