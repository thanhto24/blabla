#include <iostream>
using namespace std;

int dem = 1;
int binaryNum[1000];

void decToBinthenSolve(int n)
{
    int i = 0;
    while (n > 0)
    {
        binaryNum[i] = n%2 ;
        n /= 2;
        i++;
    }
    if(dem > i)
        for(int j = 0; j < dem-i; j++)
            cout << 4;
     for(int j = i-1 ; j >= 0; j--)
        if(binaryNum[j]==1) cout << 7;
        else cout << 4;
    return ;
}
int main()
{
    int k;
    cin >> k;
    if(k==1) return cout << 4,0;
    if(k==2) return cout << 7,0;
    int tmp = 2;
    while(true)
    {
        if(k - tmp <= 0) break;
        k -= tmp;
        tmp *= 2;
        dem++;
    }
    k--;
    decToBinthenSolve(k);
    return 0;
}
