#include <iostream>
#include <set>

using namespace std;

string S;
char s[200];
set <char> st;
int k, tmp;
int dem[200];

void solveA()
{
    for( int i = 1; i < S.size()-1; i++)
    {
        if(s[i]=='_')
            {
                s[i+1]=s[i+1]-32;
                tmp++;
            }
    }
    for(int i=1;i<=S.size()-1;i++)
        if(s[i]!='_') cout << s[i];
}
void solveB()
{
    for( int i = 1; i <= S.size()-1; i++)
    {
        if(s[i]<='Z'&&s[i]>='A')
            {
                s[i]=s[i]+32;
                dem[i]=1;
            }
    }
    for(int i=1; i<=S.size()-1;i++)
    {
        if(dem[i]!=0) cout << '_';
        cout << s[i];
    }
}
int main()
{
    cin >> S;
    S=' '+S;
    for(int i=1; i<=S.size();i++)
    {
        s[i]=S[i];
        if(s[i]=='_') k=1;
    }
    if(s[1]<='Z'&&s[1]>='A')
    {
        cout << "Error!";
        return 0;
    }
    for(int i=1;i<S.size()-1;i++)
        if(s[i]=='_'&&((s[i+1]>='A'&&s[i+1]<='Z')||s[i+1]=='_'))
    {
        cout << "Error!";
        return 0;
    }
    if(s[1]=='_'||s[S.size()-1]=='_')
    {
        cout << "Error!";
        return 0;
    }
    if(k==1)
    solveA();
    else
    solveB();
//    for(int i=1;i<S.size();i++)
//        cout << s[i];
    return 0;
}
