#include <iostream>

using namespace std;
int n,m;
long long k,cnt=1;
int main()
{
    int N,M;
    long long tmp=1;
    cin >> N >> M >> k;
    m=min(N,M);
    n=max(N,M);
    if(cnt==k) return cout << 1,0;
    if(m==1) return cout << k,0;
    for(int j=1;j<=m;j++)
    {
        if(tmp==1)
        tmp=(j+1)*(j+1);
        for(int i=j+1;i<=n;i++)
        {
          //  cout << i << " " << j <<" "<< i*j << endl;
            if(i*j>=tmp&&tmp!=1)
               {
                    cnt++;
                    if(cnt==k) return cout << tmp,0;
                    tmp=1;
               }
            cnt++;
            if(cnt==k) return cout << i*j,0;
            if(i<=m)
            cnt++;
            if(cnt==k) return cout << i*j,0;
        }
    }
    cout << n*m;
    return 0;
}
