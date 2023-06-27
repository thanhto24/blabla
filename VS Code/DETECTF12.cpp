#define ii pair<long long, int>
#define x first
#define y second
#define mp make_pair
#include <bits/stdc++.h>

using namespace std;

vector <ii> pos, F1, Remain;
ii F0;
int F1 = 0, F2 = 0, dis, R, n, f0, F2;

bool cmp( ii a, ii b)
{
    return a.x < b.x || ( a.x == b.x && a.y > b.y);
}
int dis(int X, int Y, int A, int B)
{
    return sqrt((X-A)*(X-A)+(Y-B)*(Y-B));
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> f0 >>R;
    int X, Y;
    for(int i = 0; i < n; i++)
    {
        cin >> X >> Y;
        pos.push_back(mp(X,Y));
        if(i==f0)
        {
            F0.x = X;
            F0.y = Y;
        }
    }
    sort(pos.begin(),pos.end(),cmp);
    for(int i = 0; i < n; i++)
    {
        if(dis(pos[i].x,pos[i].y,F0.x,F0.y)<=R)
        {
            if(dis(pos[i].x,pos[i].y,F0.x,F0.y)==0) continue;
            F1.push_back(mp(pos[pos.begin()+i].x,pos[pos.begin()+i].y));
            pos.erase(pos.begin()+i);
        }
        else
            Remain.push_back(mp(pos[pos.begin()+i].x,pos[pos.begin()+i].y));
    }
    for(int i = 0; i < F1.size(); i++)
    {
        for(int j = 0; j < Remain.size(); j++)
        {
            if(dis(Remain[i].x,Remain[i].y,F1.x,F1.y)<=R)
            {
                F2++;
            }
        }
    }

    cout << F1.size() << " " << F2;
    return 0;
}