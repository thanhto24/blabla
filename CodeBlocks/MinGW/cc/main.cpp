#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("input.txt");
    int a,b,c;
    fin >> a >> b >> c;
    fout.open("output.txt");
    fout << a+b+c;
    return 0;
}
