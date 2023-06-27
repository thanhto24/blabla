#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0) -> sync_with_stdio(0);
    string s;
    deque<char> s1, s2;
    char tmp;
    // freopen("10.in","r",stdin);
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '<' && !s1.empty())
        {
            tmp = s1.back();
            s1.pop_back();
            s2.push_front(tmp);
            continue;
        }
        if (s[i] == '>' && !s2.empty())
        {
            tmp = s2.front();
            s2.pop_front();
            s1.push_back(tmp);
            continue;
        }
        if (s[i] == '-' && !s1.empty())
        {
            s1.pop_back();
            continue;
        }
        if (s[i] != '>' && s[i] != '<' && s[i] != '-')
            s1.push_back(s[i]);
    }
    for (int i = 0; i < s1.size(); i++)
        cout << s1[i];
    for (int i = 0; i < s2.size(); i++)
        cout << s2[i];
    return 0;
}