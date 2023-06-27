#include <iostream>
#include <math.h>
using namespace std;

const int maxN = 16;
struct Color{
    string name;
    int R;
    int G;
    int B;
};

Color Colors[ maxN + 1 ];

void init()
{
    Colors[1 ].name = "White",  Colors[1 ].R = 255, Colors[1 ].G = 255, Colors[1 ].B = 255;
    Colors[2 ].name = "Silver", Colors[2 ].R = 192, Colors[2 ].G = 192, Colors[2 ].B = 192;
    Colors[3 ].name = "Gray",   Colors[3 ].R = 128, Colors[3 ].G = 128, Colors[3 ].B = 128;
    Colors[4 ].name = "Black",  Colors[4 ].R = 0  , Colors[4 ].G = 0  , Colors[4 ].B = 0  ;
    Colors[5 ].name = "Red",    Colors[5 ].R = 255, Colors[5 ].G = 0  , Colors[5 ].B = 0  ;
    Colors[6 ].name = "Maroon", Colors[6 ].R = 128, Colors[6 ].G = 0  , Colors[6 ].B = 0  ;
    Colors[7 ].name = "Yellow", Colors[7 ].R = 255, Colors[7 ].G = 255, Colors[7 ].B = 0  ;
    Colors[8 ].name = "Olive",  Colors[8 ].R = 128, Colors[8 ].G = 128, Colors[8 ].B = 0  ;
    Colors[9 ].name = "Lime",   Colors[9 ].R = 0  , Colors[9 ].G = 255, Colors[9 ].B = 0  ;
    Colors[10].name = "Green",  Colors[10].R = 0  , Colors[10].G = 128, Colors[10].B = 0  ;
    Colors[11].name = "Aqua",   Colors[11].R = 0  , Colors[11].G = 255, Colors[11].B = 255;
    Colors[12].name = "Teal",   Colors[12].R = 0  , Colors[12].G = 128, Colors[12].B = 128;
    Colors[13].name = "Blue",   Colors[13].R = 0  , Colors[13].G = 0  , Colors[13].B = 255;
    Colors[14].name = "Navy",   Colors[14].R = 0  , Colors[14].G = 0  , Colors[14].B = 128;
    Colors[15].name = "Fuchsia",Colors[15].R = 255, Colors[15].G = 0  , Colors[15].B = 255;
    Colors[16].name = "Purple", Colors[16].R = 128, Colors[16].G = 0  , Colors[16].B = 128;
}
void solve(int r, int g, int b)
{
    string res;
    double mn = 1e9;
    for(int i = 1; i <= maxN; i++)
    {
        if(sqrt(pow(Colors[i].R-r,2)+pow(Colors[i].G-g,2)+pow(Colors[i].B-b,2))<mn)
        {
             mn = sqrt(pow(Colors[i].R-r,2)+pow(Colors[i].G-g,2)+pow(Colors[i].B-b,2));
             res = Colors[i].name;
        }
    }
    cout << res << endl;
}
int main()
{
    init();
    int r, g, b;
    while(cin >> r >> g >> b)
    {
        if(r==g&&g==b&&b==-1)
            return 0;
        solve(r,g,b);
    }
}