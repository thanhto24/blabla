#include <bits/stdc++.h>

using namespace std;

vector <int> SNT;
int a, b;

void sieve(int B, bool prime[])
{
    memset(prime,true,sizeof(prime));
    for(int i = 2; i * i <= min(B, 1000006); i++)
        if(prime[i])
            for(int j = i * i; j <= min(B, 1000006); j+=i)
                prime[j] = false;
    for(int i = 2; i <= min(B, 1000006); i++)
    {
        if(prime[i])
            SNT.push_back(i);
    }
}
bool check(int k)
{
    for(int i = 0; i < SNT.size(); i++)
        if(k%SNT[i]==0) return false;
    return true;
}
int main()
{
    cin.tie(0) -> sync_with_stdio(0);
    cin >> b >> a;
    int tmp = min(b, 1000006);
    bool prime[tmp+10];
    sieve(tmp,prime);
    for(int i = a; i > b; i--)
        if(check(i)) return cout << i, 0;
    cout << -1;
    return 0;
}
