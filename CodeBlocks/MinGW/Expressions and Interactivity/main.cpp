#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Nhap so a: ";
    cin >> a;
    a += 2 + 1 - 4 % 2;
    cout << "Gia tri moi cua a la: " << a;
    return 0;
}
