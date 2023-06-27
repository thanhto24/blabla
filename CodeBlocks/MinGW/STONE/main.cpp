#include <iostream>

using namespace std;

int main()
{
    string s;
    int res=0;
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        res+=s[i]-'0';
        res%=3;
    }

    if(res==0) res=-1;
    cout << res;
    return 0;
}
