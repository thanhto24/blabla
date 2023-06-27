#include <iostream>
#include <set>
#include <algorithm>
#define ii pair <float, float>
#define f first
#define s second

using namespace std;
float X,Y;
ii a[9];
set <float> se;

bool check(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
    if(((x1-x4)*(x2-x3)+(y1-y4)*(y2-y3))==0) return true;
    return false;
}
bool cmp( ii a, ii b)
{
    return (a.f<b.f||a.f==b.f&&a.s>b.s);
}
float cal(float x1, float y1, float x2, float y2)
{
    return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}
void enter()
{
    for(int i=1;i<=4;i++)
        cin >> a[i].f >> a[i].s;
}
void solve()
{
    sort(a+1,a+4+1,cmp);
    X=((a[1].f+a[4].f)/2);
    Y=((a[1].s+a[4].s)/2);
//    cout << X << " " << Y << endl;
//    for(int i=1; i<=4; i++)
//        cout << a[i].f << " " << a[i].s << " ";
    for(int i=1;i<=4;i++)
        se.insert(cal(X,Y,a[i].f,a[i].s));
    if(se.size()==1&&(check(a[1].f,a[1].s,a[2].f,a[2].s,a[3].f,a[3].s,a[4].f,a[4].s)==true)) cout << "YES";
    else cout << "NO";
}
int main()
{
    enter();
    solve();
    return 0;
}
