#include <bits/stdc++.h>

using namespace std;

long double S,E,W,NW;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> E >> W >> S;
    cout << setprecision(6) << fixed << E / S * W ;
    return 0;
}
