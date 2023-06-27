#include <iostream>
#include <set>
using namespace std;
int n,a,b,k,pos,f[100000];
set <int> kq;
bool check(int x, char s)
{
    if(s=='t'&&pos+a<=n) return true;
    if(s=='l'&&pos-b>=1) return true;
    return false;
}
int main()
{
    cin >> n >> a >> b >> k;
    pos=1;
    while(k>0)
    {
        while(true)
        {
            if(check(pos,'t'))
            {
                pos+=a;
                f[pos]++;
                if(f[pos]>1&&f[pos-a-b]<1) {
                    pos-=a;
                    break;

                }
                kq.insert(pos);
                cout << pos << " ";
            }
            else break;
            k--;
            if(k==0) break;
        }
        if(k>0)
        {
            while(true)
            {
                if(check(pos,'l'))
               {
                    pos-=b;
                    f[pos]++;
                    if(f[pos]>1&&f[pos+b+a]<1) {
                        pos+=b;
                        break;
                    }
                    kq.insert(pos);
                    cout << pos << " ";

               }
                else break;
                k--;
                if(k==0) break;
            }
        }
    }
    kq.insert(1);
    cout << n-kq.size();
    return 0;
}
