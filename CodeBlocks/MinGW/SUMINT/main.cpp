#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

long long N;
long long L,R;
vector <pair<long long, long long>> kq;
int main()
{
    cin >> N;
    int key=N%2;
    float t;
    for(int i=2;i<=sqrtl(2*N);i++)
    {
        if(i%2!=0&&N%i!=0) continue;
        if(i%2==0&&((i/2+key)%2)!=0) continue;
        if(N%2==0&&i%2==0&&N%i==0) continue;
        int tmp=i/2;
        R=N/i+tmp;
        if(i%2==0) L=N/i-tmp+1;
        else L=N/i-tmp;
        if(N%2==0&&i%2==0&&(L+R)*(i/2)!=N) continue;
        if(N%2!=0&&i%2==0&&(L+R)*(i/2)!=N) continue;
        kq.push_back({L,R});

    }
    cout << kq.size() << endl;
    for(auto x:kq)
        cout << x.first << " " << x.second << endl;
    return 0;
}
