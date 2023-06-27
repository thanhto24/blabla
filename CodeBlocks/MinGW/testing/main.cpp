#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    int cnt = 0;
    ifstream fin;
    fin.open("input2.txt");
    if(!fin.is_open())
    {
        cout << "Khong mo duoc file!";
        return 0;
    }
    string searchh, S;
    cin >> searchh;
    while(!fin.eof())
    {
        getline(fin, S, ' ');
        if(S==searchh)
            cnt++;
    }
    fin.close();
    ofstream fout;
    fout.open("ouput.txt");
    if(!fout.is_open())
    {
        cout << "Khong mo duoc file!";
        return 0;
    }
    fout << searchh << " xuat hien " << cnt << " lan";
    cout << "Done!";
    fout.close();
    return 0;
}
