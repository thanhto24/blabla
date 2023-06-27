#include <bits/stdc++.h>

using namespace std;
int a[10];
int main()
{
    for(int i=1; i<= 5; i++)
        cin >> a[i];
    cout << upper_bound(a+1,a+1+5,2)-a;
    return 0;
}
