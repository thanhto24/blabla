#include <iostream>
using namespace std;

void unique(int a[], int &n)
{
    int dem = 0, tmp = 0;
    int pos[n];
    bool wasPositive[1000000], wasNegative[1000000];

    for(int i = 0; i < n; i++)
    {
        if(a[i]>0)
        {
            if(!wasPositive[a[i]])
            {
                pos[tmp++] = i;
                wasPositive[a[i]] = true;
            }
            else
                dem++;
        }
        else
        {
            if(!wasNegative[a[i]*-1])
            {
                pos[tmp++] = i;
                wasNegative[a[i]*-1] = true;
            }
            else
                dem++;
        }
    }
    n -= dem;
    for(int i = 0; i < n; i++)
    {
        a[i] = a[pos[i]];
    }
}


int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    unique(a,n);
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}