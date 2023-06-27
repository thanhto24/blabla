#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(time(0));
    int n=rand()%2;
    if(n==0) cout <<"you are the loser";
    else cout << "you are the winner";
    return 0;
}
