#include <bits/stdc++.h>

using namespace std;

string S;
long long a[1009];
long long n, N, mx = -1;

long long poww(int a, int b)
{
    int tmp = 1;
    for(int i = 1; i <= b; i++)
        tmp *= a;
    return tmp;
}
int trans(string S)
{
    int tmp = 0;
    for(int i = 0; i < S.size(); i++)
    {
        tmp *= 10;
        tmp += S[i] - '0';
    }
    return tmp;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> S;
        N = S.size();
        a[i] = trans(S);
        mx = max(mx, a[i]);
    }
    cout << max(mx, poww(10,N-1)) << endl;
    cout << poww(10,N) - 1;
    return 0;
}