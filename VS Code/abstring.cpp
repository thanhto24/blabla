#include <iostream>

using namespace std;

int n, st, ed, S, E, mx = -1;
char chr[1000005];

void solve(int &pos, int &st, int &ed)
{
    st = pos;
    ed = pos;
    while(pos<=n)
    {
        if((pos-st)%2==0)
        {
            if(chr[pos]=='b')
            {
                ed--;
                return;
            }
        }
        if((pos-st)%2!=0)
        {
            if(chr[pos]=='a')
                return;
        }
        ed = pos;
        pos++;
    }
}
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> chr[i];
    for(int i = 1; i <= n; i++)
    {
        if(chr[i]=='a')
        {
            solve(i, st, ed);
            i--;
            if(ed-st+1>mx)
            {
                mx = ed - st;
                S = st;
                E = ed;
            }
        }
    }
    for(int i = S; i <= E; i++)
        cout << chr[i];
    if(chr[E]=='a')
        cout << 'a';
    return 0;
}