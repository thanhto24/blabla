#include <iostream>
#include <stack>

using namespace std;

stack <int> stck;
char s[100];

void solve(char s[])
{
    int tmp;
////    char *p=strtok(s," ");
//    for(int i=0;i<s.size();i+=2)
//    {
//        if(s[i]=='+'||s[i]=='-'||s[i]=='*')
//        {
//            int a=stck.top();stck.pop();
//            int b=stck.top();stck.pop();
//            if(s[i]=='+') tmp=a+b;
//            if(s[i]=='-') tmp=b-a;
//            if(s[i]=='*') tmp=a*b;
//            stck.push(tmp);
//        }
//        else
//            stck.push(s[i]-'0');
//    }
    cout << stck.top();
}
int main()
{
    cin >> s[];
    solve(s);
    return 0;
}
