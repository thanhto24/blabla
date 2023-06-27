#include <iostream>
using namespace std;
struct Colors{
    string name;
    int R;
    int G;
    int B;
};
int main()
{
    int r, g, b;
    while(cin >> r >> g >> b)
    {
        if(r==g&&g==b&&b==-1)
            return 0;
        solve(r,g,b);
    }
}