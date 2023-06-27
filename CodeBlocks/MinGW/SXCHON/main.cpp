#include <iostream>
#include <algorithm>
using namespace std;

int n, a[22], b[22];
void enter()
{
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i], b[i]=a[i];
}
void solve()
{
    sort(b+1,b+n+1);
    int j=1, l=1;
    int thanh=1, tmp;
    while(thanh<n)
    {
        for(int i=l;i<=n;i++)
        {
            if(a[i]==b[j])
            {
                swap(a[i],a[j]);
                tmp=i;
                break;
            }
        }
        for(int i=1;i<=n;i++)
            if(i==tmp||i==thanh)
                cout << "[" << a[i] << "]" << " ";
        else cout << a[i] << " ";
        cout << endl;
        l++;
        j++;
        thanh++;
    }
}
int main()
{
    enter();
    solve();
    return 0;
}
