#include <iostream>

using namespace std;

int A, B;
int n,m,x,y;
int minn[100], maxx[100];

int a[100], b[100];

void enter()
{
  cin >> A >> B;
  int tmp=A, k=0;
  while(tmp>0)
  {
      k++;
      tmp/=10;
  }
  n=k;
  while(A>0)
  {
      a[k]=A%10;
      A/=10;
      k--;
  }
  tmp=B, k=0;
  while(tmp>0)
  {
      k++;
      tmp/=10;
  }
  m=k;
  while(B>0)
  {
      b[k]=B%10;
      B/=10;
      k--;
  }
}
void solvemin()
{
    int i=1, j=1;
    int kn=1;
    int key;
    a[n+1]=1e8;
    b[m+1]=1e8;
    while(i <= n && j <= m)
    {
        key=0;
        if(a[i]==b[j]&&key==0)
            {
                if(a[i+1]<b[j+1]&&key==0)
                    {
                        minn[kn]=a[i];
                        i++;
                        key=1;
                    }
                if(a[i+1]>b[j+1]&&key==0)
                    {
                        minn[kn]=b[j];
                        j++;
                        key=1;
                    }
            }
        if(a[i]<b[j]&&key==0)
        {
            minn[kn]=a[i];
            i++;
            key=1;
        }
        if(a[i]>b[j]&&key==0)
        {
            minn[kn]=b[j];
            j++;
            key=1;
        }
       // cout << i <<  ' ' << j << endl;
        kn++;
    }
    while(i<=n)
    {
        minn[kn]=a[i];
        i++;
        kn++;
    }
    while(j<=m)
    {
        minn[kn]=b[j];
        j++;
        kn++;
    }
    for(int k=1;k<=n+m;k++) cout << minn[k];

}
void solvemax()
{
    int i=1, j=1;
    int km=1;
    int key;
    a[n+1]=-1;
    b[m+1]=-1;
    while(i <= n && j <= m)
    {
        key=0;
        if(a[i]==b[j]&&key==0)
            {
                if(a[i+1]>b[j+1]&&key==0)
                    {
                        maxx[km]=a[i];
                        i++;
                        key=1;
                    }
                if(a[i+1]<b[j+1]&&key==0)
                    {
                        maxx[km]=b[j];
                        j++;
                        key=1;
                    }
                if((a[i+1]==b[j+1]&&key==0))
                {
                    if(i<j&&key==0)
                    {
                        maxx[km]=a[i];
                        i++;
                        key=1;
                    }
                    if(i>j&&key==0)
                    {
                        maxx[km]=b[j];
                        j++;
                        key=1;

                    }
                }
            }
        if(a[i]>b[j]&&key==0)
        {
            maxx[km]=a[i];
            i++;
            key=1;
        }
        if(a[i]<b[j]&&key==0)
        {
            maxx[km]=b[j];
            j++;
            key=1;
        }
       // cout << i <<  ' ' << j << endl;
        km++;
    }
    while(i<=n)
    {
        maxx[km]=a[i];
        i++;
        km++;
    }
    while(j<=m)
    {
        maxx[km]=b[j];
        j++;
        km++;
    }
    for(int k=1;k<=n+m;k++) cout << maxx[k];
}
int main()
{
    enter();
    solvemin();
    cout << endl;
    solvemax();
    return 0;
}
