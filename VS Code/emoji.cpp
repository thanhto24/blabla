#include <bits/stdc++.h>

using namespace std;

map <char, int> mp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    while(mp['[']>0)
    {
        cout << "[:|||:]" << endl;
        mp['[']--;
        mp[']']--;
        mp['|']-=3;
        mp[':']-=2;
    }
    while(mp['8']>0)
    {
        cout << "8-0" << endl;
        mp['8']--;
        mp['-']--;
        mp['0']--;
    }
    while(mp['~']>0)
    {
        cout << ":~(" << endl;
        mp[':']--;
        mp['~']--;
        mp['(']--;
    }
    while(mp[';']>0)
    {
        if(mp[')']>0)
        {
            cout << ";-)" << endl;
            mp[';']--;
            mp['-']--;
            mp[')']--;
        }
        else if(mp['(']>0)
        {
            cout << ";-(" << endl;
            mp[';']--;
            mp['-']--;
            mp['(']--;
        }
    }
    if(mp[':']>0)
    {
        while(mp['P']>0)
        {
            cout << ":-P" << endl;
            mp['P']--;
            mp['-']--;
            mp[':']--;
        }
        while(mp['D']>0)
        {
            cout << ":D" << endl;
            mp['D']--;
            mp[':']--;
        }
        while(mp['C']>0)
        {
            cout << ":C" << endl;
            mp['C']--;
            mp[':']--;
        }
        while(mp['0']>0)
        {
            cout << ":-0" << endl;
            mp['0']--;
            mp[':']--;
            mp['-']--;
        }
        while(mp['|']>0)
        {
            cout << ":-|" << endl;
            mp['|']--;
            mp[':']--;
            mp['-']--;
        }
        while(mp['E']>0)
        {
            cout << ":-E" << endl;
            mp['E']--;
            mp[':']--;
            mp['-']--;
        }
        while(mp['X']>0)
        {
            cout << ":-X" << endl;
            mp['X']--;
            mp[':']--;
            mp['-']--;
        }
        while(mp[')']>0)
        {
            cout << ":)" << endl;
            mp[')']--;
            mp[':']--;
        }
        while(mp['(']>0)
        {
            cout << ":(" << endl;
            mp['(']--;
            mp[':']--;
        }
        while(mp[':']>0)
        {
            cout << ":-";
            cout << (char)92 << endl;
            mp[':']--;
        }
    }
    return 0;
}
