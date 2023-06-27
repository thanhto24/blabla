#include <iostream>
#include <string.h>
using namespace std;

char s[102];
int n;

int main()
{
    cin.get(s,101,'\n');
    cin.get();
    n = strlen(s);
    int i;
    i = n - 1;
    while(s[i]==47||s[i]=='*')
    {
        if(i==0)
            break;
        s[i] = '*';
        i--;
        
    }
    i = 0;
    while(i<n)
    {
        if(s[i+1] == 47 && s[i] == 47)
            s[i] = '*';
        i++;
    }
    i = 0;
    while(i<n)
    {
        if(s[i]!='*')
            cout << s[i];
        i++;
    }
    return 0;
}