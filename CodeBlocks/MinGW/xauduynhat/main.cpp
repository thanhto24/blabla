#include <iostream>

using namespace std;

string S;
int res=1;

void enter()
{
   cin >> S;
}
void solve()
{
    int l=0;
    for(int i=1;i<S.size();i++)
    {
        for(int j=l;j<i;j++)
        {
            if(S[i]==S[j])
            {
                l=j+1;
                break;
            }
        }
        res=max(res,i-l+1);
    }
    cout << res;
}
int main()
{
    enter();
    solve();
    return 0;
}
