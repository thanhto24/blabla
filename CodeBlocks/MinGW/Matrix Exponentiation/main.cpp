#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e9 + 7;

struct Matrix{
    int a[2][2] = {{0,0},{0,0}};
    Matrix operator *( const Matrix& other) const{
        Matrix product;
        for(int i: {0,1})
            for(int j: {0,1})
                for(int k: {0,1})
                    product.a[i][k] = ( product.a[i][k]
                                        + (long long) a[i][j] * other.a[j][k] ) % maxN;
        return product;
    }
};

Matrix poww(Matrix a, long long n)
{
    Matrix res;
    res.a[0][0] = res.a[1][1] = 1;
    while(n)
    {
        if(n % 2)
            res = res * a;
        a = a * a;
        n /= 2;
    }
    return res;
}
int main()
{
    long long n;
    cin >> n;
    Matrix single;
    single.a[0][0] = 0;
    single.a[1][0] = 1;
    single.a[0][1] = 1;
    single.a[1][1] = 1;
    cout << poww(single, n).a[1][0] << endl;
    return 0;
}
