#include <bits/stdc++.h>

using namespace std;

string s;
int n;
bool ok;

bool check(char S)
{
    if(S>='a'&&S<='z') return true;
    if(S>='A'&&S<='Z') return true;
    if(S=='.') return true;
    if(S=='_') return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin,s);
    n = s.size();
    for(int i = 0; i < n; i++)
    {
        if(!check(s[i]))
            return cout << "no", 0;
    }
    if(s[n-1]=='y'||s[n-1]=='Y')
        if(s[n-2]=='p'||s[n-2]=='P')
            if(s[n-3]=='.')
                ok = true;
    if(ok) cout << "yes";
    else cout << "no";
    return 0;
}