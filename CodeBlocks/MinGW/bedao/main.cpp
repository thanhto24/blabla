#include <bits/stdc++.h>

using namespace std;

string s;
int dem[100000];

void Do(char k, int t)
{
    for(int i = 1; i <= t; i++)
    {
        if(k=='8')
            {
                cout << "8-0" << endl;
                dem[(int)"-"]++;
            }


    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    for(auto x: mp)
    {
        Do(x.first, x.second - dem[(int)x.first]);
    }
    return 0;
}
