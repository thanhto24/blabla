#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int i = 1, j = n;
    while(i<j)
    {
        cout << i << " " << j << " ";
        i++;
        j--;
    }
    if(n%2!=0)
        cout << n / 2 + 1;
    return 0;
}