#include <bits/stdc++.h>

using namespace std;

const long long maxN = 1e7 + 7;
bool prime[maxN+1];
unsigned long long int res = 1, T, n;
set <unsigned long long int> s;
void sieve()
{
    for(int i = 2; i <= maxN; i++)
        prime[i] = true;
    for(int i = 2; i * i <= maxN; i++)
        if(prime[i])
            for(int j = i * i; j <= maxN; j += i)
                prime[j] = false;
    for(int i = 2; i <= maxN; i++)
        if(prime[i])s.insert(i);
    for(int i = 1; i <= 60; i++)
    {
        if(prime[i])
        {
            res *= i;
            s.insert(res);
        }
    }
    s.insert(1e9+7);

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    cin >> T;
    while(T--)
    {
        cin >> n;
        if(s.count(n))
        cout << "NICE\n";
        else cout << "UGLY\n";
    }
    return 0;
}
