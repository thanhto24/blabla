#include <bits/stdc++.h>

using namespace std;

long long L, R, A, K, S, LCM, tmp, start;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> L >> R >> A >> K;
    if(A%K==0) return cout << R - L + 1, 0;
    tmp = K / __gcd(A,K);
    start = L / tmp;
    if(L%tmp!=0) start++;
    cout << (R/tmp-start) + 1;
    return 0;
}
