#include <bits/stdc++.h>
using namespace std;

long long n , k , res , r , l ,i;
string s;
char ch;

int main(){
    cin >> n;
    cin >> s;
    cin >> k >> ch;
    k--;
    s.insert(s.begin()+k, ch);
    bool check = false;
    while (check == false){
        i = k;
        while ( s[i+1] == s[i]) i++;
        r = i ; i = k ;
        while ( s[i-1] == s[i]&&i>0) i--;
        l = i;
        if ( r - l +1 >= 3)
        {
            res += r - l +1;
            s.erase(l, r - l + 1 );
            if (s[l-1] == s[l] ) k = l-1;
            else check = true;
        }
        else check = true;
    }
    cout << res;
    return 0;
}
