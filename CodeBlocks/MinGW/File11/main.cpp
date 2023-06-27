#include <iostream>
#include <cstring>
#include <fstream>
#include <vector>

using namespace std;

float toNum(string s, int &i)
{
    bool point = false;
    int dem = 1;
    int tmp = 0;
    while((s[i]>='0'&&s[i]<='9')||s[i]=='.')
    {
        if(s[i]!='.')
        {
            tmp *= 10;
            tmp += s[i] - '0';
        }
        else
        {
            point = true;
            continue;
        }
        if(point)
            dem *= 10;
        i++;
    }
    return tmp * 1.0 / 10;
}
void solve(string s, vector <float> res)
{
    int i = 0, pos;
    float a, b;
    a = toNum(s,i);
    while(s[i]==' ')
        i++;
    pos = i;
        i++;
    while(s[i]==' ')
        i++;
    b = toNum(s,i);
    if(s[pos]=='+')
    {
        res.push_back(a+b);
    }
    if(s[pos]=='-')
    {
        res.push_back(a-b);
    }
    if(s[pos]=='*')
    {
        res.push_back(a*b);
    }
    if(s[pos]=='/')
    {
        res.push_back(a/b);
    }

}

int main()
{
    ifstream fin;
    fin.open("input1.txt");
    if(!fin.is_open())
    {
        cout << "Khong mo duoc file!";
        return 0;
    }
    string s;
    vector <float> res;
    while(!fin.eof())
    {
        getline(fin, s);
        solve(s, res);
    }
    fin.close();
    ofstream fout;
    fout.open("ouput.txt");
    if(!fout.is_open())
    {
        cout << "Khong mo duoc file!";
        return 0;
    }
    for(int i = 0; i < res.size(); i++)
    {
        fout << res[i] << endl;
    }
    fout.close();
    cout << "Done!";
    return 0;
}
