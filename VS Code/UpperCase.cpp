#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    for(int i = 0; i < s.size(); i++)
    {
       if(i==0||(s[i-1]==' '&&s[i]!=' '))
            s[i] = toupper(s[i]);
    }
    for(int i = 0; i < s.size(); i++)
        if(s[i]!=' ') cout << s[i];
    return 0;
}