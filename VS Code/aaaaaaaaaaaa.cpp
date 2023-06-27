#include <bits/stdc++.h>

using namespace std;

int T;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> T;
    cin.ignore();
    while (T--)
    {
        string s;
        stack<char> st, st2;
        queue<char> q;
        long long res = 0;
        getline(cin, s);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
                q.push(s[i]);
            else
            {
                if (st.empty())
                    st.push(s[i]);
                else
                {
                    if ((s[i] == '*' || s[i] == '/') || ((st.top() == '+' || st.top() == '-') && (s[i] == '+' || s[i] == '-')))
                    {
                        char tmp = st.top();
                        st.pop();
                        q.push(tmp);
                        st.push(s[i]);
                        continue;
                    }
                    if ((st.top() == '*' || st.top() == '/') && (s[i] == '+' || s[i] == '-'))
                    {
                        q.push(s[i]);
                        continue;
                    }
                }
            }
        }
        q.push(st.top());
        st.pop();
        while(!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl << endl;
        while(!q.empty())
        {
            cout << q.front() << " ";
            q.pop();
        }

        while (!q.empty())
        {
            if (q.front() >= '0' && q.front() <= '9')
                st2.push(q.front());
            else
            {
                int a = st2.top();
                st.pop();
                int b = st2.top();
                st.pop();
                if (q.front() == '+')
                    res += a + b;
                if (q.front() == '-')
                    res += a - b;
                if (q.front() == '*')
                    res += a * b;
                if (q.front() == '/')
                    res += a / b;
            }
            q.pop();
        }
        cout << res << endl;
    }
    return 0;
}