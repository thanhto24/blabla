#include <bits/stdc++.h>
#define mp make_pair
using namespace std;

long double calc(long long aa, long long bb, long long xx, long long yy)
{
    return sqrt((aa-xx)*(aa-xx)+(bb-yy)*(bb-yy));
}

long long n, f0, R, X0, Y0, x[1003], y[1003];
bool wasf1[1003], wasf2[1003];
long long f1 = 0, f2 = 0;
vector <pair<long long, long long>> F1, F2;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> f0 >> R;
    for(int i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i];
        if(i==f0)
        {
            X0 = x[i];
            Y0 = y[i];
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(i==f0) continue;
        if(calc(x[i],y[i],X0,Y0)<=R)
        {
//            cout << x[i] << " " << y[i] << " " << calc(x[i],y[i],X0,Y0)<< endl;
            f1++;
            wasf1[i] = true;
            F1.push_back(mp(x[i],y[i]));
        }
        else
            F2.push_back(mp(x[i],y[i]));
    }
//    cout << endl;
    for(int i = 0; i < F1.size(); i++)
    {
        {
            for(int j = 0; j < F2.size(); j++)
            {
                if(!wasf2[j])
                if(calc(F1[i].first,F1[i].second,F2[j].first,F2[j].second)<=R)
                {
//                    cout << F2[j].first << " " << F2[j].second << endl;
                    wasf2[j] = true;
                    f2++;
                }
            }
        }
    }
    cout << f1 << " " << f2;
    return 0;
}
