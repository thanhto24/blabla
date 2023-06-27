#include <iostream>
#include <vector>

using namespace std;

vector <pair <int, int>> adj;
int n, a[22];


void enter()
{
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
}
void solve()
{
    int k=1;
    int res=0;
    while(k<n)
    {
        res=0;
        for(int i=0;i<k;i++)
        {
            if(a[i] <= a[k])
                res++;
        }
        adj.push_back({a[k],res});
        k++;
    }
    for( auto x: adj)
        cout << x.first << " " << x.second << endl;

}
int main()
{
    enter();
    solve();
    return 0;
}
