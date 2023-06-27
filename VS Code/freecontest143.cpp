#include <bits/stdc++.h>
using namespace std;

int n, a[1003], res = 1, dem0 = 0;
vector <int> positive, negative;
const int maxN = 1e9+7;

int calc()
{
    long long tmp = 1;
    for(int i = 0; i < positive.size(); i++)
        tmp *= positive[i],
        tmp %= maxN;
    for(int i = 0; i < negative.size(); i++)
        tmp *= negative[i],
        tmp %= maxN;
    return tmp;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
        if(a[i]<0)
            negative.push_back(a[i]);
        if(a[i]>0) 
            positive.push_back(a[i]);
        if(a[i]==0)
            dem0++;
    }
    if(dem0>1) return cout << 0, 0;
    sort(positive.begin(), positive.end());
    sort(negative.begin(), negative.end());
    if(dem0==0)
    {
        if(negative.size()%2!=0)
        {
            negative.pop_back();
        }
    }
    res = calc();
    if(res<0&&dem0!=0) res = 0;
    cout << res;
    return 0;
}