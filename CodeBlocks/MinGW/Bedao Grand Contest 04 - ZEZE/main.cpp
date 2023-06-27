#include <bits/stdc++.h>

using namespace std;

const int maxxN = 1e7 + 7;
bool prime[maxxN];
long long n, endd, res = 0, k;
vector <int> adj;

void sieve(int maxN)
{
    for(int i = 2; i <= maxN; i++ )
        prime[i] = true;

    for(int i = 2; i * i <= maxN; i++)
        if(prime[i])
            for(int j = i * i; j <= maxN; j += i)
                prime[j] = false;
    int dem = 0;
    adj.push_back(1);
    for(int i = 1; i <= maxN; i++)
       {
            if(prime[i]) adj.push_back(i);
       }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n >> k;
    sieve(n);
    int i = 1, dem = 0;
    while(i<adj.size())
    {
        endd = adj[dem+k];
        if(!prime[i])
        {
            res += (n-endd+1) * (adj[dem+k-1]-i+1);
            i = endd;
        }
        else
        {
            res += (n-endd+1);
            i ++;
        }
        dem++;
    }
    cout << res;

    return 0;
}
