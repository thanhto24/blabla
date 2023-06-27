#include <bits/stdc++.h>

using namespace std;

char s[102];
bool startHost, stopHost, stopName, NO, was, mustHaveSource;
int nameLength = 0, hostLength = 0, sourceLength = 0;

bool check(char x, int i)
{
    if(x>='a'&&x<='z') return true;
    if(x>='A'&&x<='Z') return true;
    if(x>='0'&&x<='9') return true;
    if(x=='_') return true;
    if(i==1)
        if(x==47) return true;
    return false;
}

bool checkLength(int n, int dem)
{
    // cout << nameLength << " " << hostLength << " " << sourceLength << endl;
    if(nameLength<1||nameLength>16) return false;
    if(hostLength<1||hostLength>32) return false;
    if(sourceLength==0)
    {
        if(mustHaveSource) return false;
        if(nameLength+hostLength!=n-dem) return false;
        return true;
    }
    if(sourceLength<1||sourceLength>16) return false;
    if(nameLength+hostLength+sourceLength!=n-dem) return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.get(s,101,'\n');
    cin.get();
    int n = strlen(s);
    int dem = 0, tmp = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i]=='@')
        {
            if(was) NO = true;
            was = true;
            dem++;
            stopName = true;
            startHost = true;
            continue;
        }
        if(s[i]=='.')
        {
            dem++;
            if(tmp<1||tmp>16) NO = true;
            hostLength += tmp;
            tmp = 0;
            continue;
        }
        if(s[i]==47)
        {
            dem++;
            stopHost = true;
            mustHaveSource = true;
            continue;
        }
        if(!stopName)
        {
            if(check(s[i],0))
                nameLength++;
            else
                NO = true;
        }
        if(startHost == true && stopHost == false)
        {
            if(check(s[i],0))
                tmp++;
            else
                NO = true;
        }
        if(stopHost)
        {
            if(check(s[i],1))
                sourceLength++;
            else
                NO = true;
        }
    }
     if(tmp<1||tmp>16) NO = true;
            hostLength += tmp;
    if(!checkLength(n,dem)||NO||tmp==0) cout << "NO";
    else
        cout << "YES";
    return 0;
}