#include <iostream>

using namespace std;

int x, y, was[9][9], mark[9][9] = {false};

void tickCheo(int Y, int X, int var1, int var2, bool status)
{
    while(Y>0&&Y<9&&X>0&&X<9)
    {
        was[Y][X] = status;
        Y = Y + var1;
        X = X + var2;
    }
}

void tick(int Y, int X, bool status)
{
    mark[Y][X] = status;

    for(int i = 1; i <= 8; i++)
        was[i][X] = was[Y][i] = status;

    tickCheo(Y, X, 1, 1, status);
    tickCheo(Y, X, 1, -1, status);
    tickCheo(Y, X, -1, 1, status);
    tickCheo(Y, X, -1, -1, status);
}

void display()
{
    for(int i = 1; i <= 8; i++)
    {
        for(int j = 1; j <= 8; j++)
            if(mark[i][j])
                cout << "W ";
            else
            // if(was[i][j])
                cout << ". ";
            // else
            //     cout << ". ";
        cout << endl;
    }
}
// bool Stop()
// {
//     int dem = 0;
//     for(int i = 1; i <= 8; i++)   
//         for(int j = 1; j <= 8; j++)
//             if(mark[i][j])
//                 dem++;
    
//     return dem == 8;
// }

void lanRong(int Y, int X);

void quayLui(int Y, int X)
{
    if( X == x)
        return;

    for(int i = 1; i <= 8; i++)
    {
        if(mark[i][X])
        {
            tick(i,X,false);
            return;
        }
    }
}

void lanRong(int Y, int X)
{
    if(X == 9 || X ==0 || Y == 9|| Y == 0 || X == x)
        return;
    
    for(int i = 1; i <= 8; i++)
        if(mark[i][X])
            return;

    // if(Stop())
    //     return;

    bool ok;

    for(int i = 1; i <= 8; i++)
    {
        ok = false;
        if(!was[i][X])
        {
            ok = true;
            tick(i,X, true);
            lanRong(Y, X+1);
            lanRong(Y, X-1);
        }
        
        if(i==8 && !ok)
        {
           quayLui(1, X-1);
        }
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin >> y >> x; // (y,x) <-> (i,j)
    tick(y,x,true);
    lanRong(y, x+1);
    lanRong(y, x-1);
    display();
    return 0;
}