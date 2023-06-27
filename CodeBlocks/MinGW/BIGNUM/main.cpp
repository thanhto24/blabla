#include <iostream>

using namespace std;

string tong(string s,string st)
{
    while(s.size()<st.size())s='0'+s;
    while(s.size()>st.size())st='0'+st;
    s='0'+s;st='0'+st;
    int t=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        s[i]+=(int)st[i]-48+t;
        if(s[i]<=57)t=0;
        else {t=1;s[i]-=10;}

    }
    if(s[0]==48)s.erase(0,1);
    return s;
}
string hieu(string s,string st)
{
    bool h=0;
    if(s.size()<st.size()||s.size()==st.size()&&s<st)
    {
        swap(s,st);
        h=1;
    }
    while(s.size()<st.size())s='0'+s;
    while(s.size()>st.size())st='0'+st;
    int t=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        s[i]=s[i]-(int(st[i]-48)+t);
        if(s[i]>=48)t=0;
        else {t=1;s[i]+=10;}
    }
    while(s[0]==48&&s.size()!=1)s.erase(0,1);
    if(h)s='-'+s;
    return s;
}
string tich(string s,string st)
{
    string t,p="";
    int n=st.size();
    t=s;s="0";
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=(int)st[n-i-1]-48;j++)
            s=tong(s,t+p);
        p=p+'0';
    }
    return s;
}
int main()
{
    string s, st;
    cin >> s >> st;
    cout << tong(s,st) << endl;
    cout << hieu(s,st) << endl;
    cout << tich(s,st) << endl;
    return 0;
}
