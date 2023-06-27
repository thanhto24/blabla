#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void multiple2DArray(int a[][10], int b[][10], int res[][10], int m, int n, int p)
{
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            for(int k = 0; k < p; k++)
                res[i][j] += a[i][k] * b[k][j];
}

int main()
{   
    srand(time(0));

    int a[10][10], b[10][10], res[10][10];
    int p, m1, n1, m2, n2;

    cin >> m1 >> n1;
    for(int i = 0; i < m1; i++)
        for(int j = 0; j < n1; j++)
            a[i][j] = rand()%2+1;

    for(int i = 0; i < m1; i++)
    {
        for(int j = 0; j < n1; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    cin >> m2 >> n2;
    for(int i = 0; i < m2; i++)
        for(int j = 0; j < n2; j++)
            b[i][j] = rand()%2+1;

    for(int i = 0; i < m2; i++)
    {
        for(int j = 0; j < n2; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i < m1; i++)
        for(int j = 0; j < n2; j++)
            res[i][j] = 0;
    multiple2DArray(a, b, res, m1, n2, n1);

    for(int i = 0; i < m1; i++)
    {
        for(int j = 0; j < n2; j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}