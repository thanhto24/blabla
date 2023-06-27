#include <iostream>

using namespace std;

void deleteItem(int a[], int &n, int pos)
{
    n--;
    for(int i = pos; i < n; i++)
        a[i] = a[i+1];
}
void unique(int a[], int &n)
{
    bool was[n] = {false};
    for(int i = 0; i < n - 1; i++)
        if(!was[i])
        {
            for(int j = i + 1; j < n; j++)
                if(a[i] == a[j])
                    was[j] = true;
        }
    for(int i = n - 1; i >= 0; i--)
    {
        if(was[i])
            deleteItem(a,n,i);
    }
}

void display(int a[], int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main()
{
    cout << "Nhap n: ";
    int n;
    cin >> n;
    cout << "Nhap cac phan tu cua mang a: ";
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unique(a,n);
    display(a,n);
}