#include <bits/stdc++.h>

using namespace std;

int y, cnt[10];
bool firstNum;

int gt(int x)
{
    int tmp = 1;
    for(int i = 1; i <= x; i++)
        tmp *= i;
    return tmp;
}
void process()
{
    if(y==1) return void(cout << 0);
    int dem = 9;
    while(y >= 1 && dem > 0)
    {
        if(y>=gt(dem))
        {
            cnt[dem] = y / gt(dem);
            y -=  ( y / gt(dem)) * gt(dem);
        }
        dem--;

    }
    for(int i = 1; i <= 9; i++)
    {
        while(cnt[i]>0)
        {
            if(firstNum && i == 1)
                cout << 0;
            else
            cout << i;
            if(i==1)
                firstNum = true;
            cnt[i]--;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> y;
    process();
    return 0;
}