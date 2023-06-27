#include <iostream>
#include <map>
#define long long long
using namespace std;
const int MaxN=111539786;
map <long,long> F;
long f(long n)
{
	if(F.count(n)) return F[n];
	long k=n/2;
	int tmp=n%2;
	return F[n]=(f(k)*f(k+tmp)+f(k+tmp-1)*f(k-1))%MaxN;
}
int main() {
	long n;
	F[0]=F[1]=1;
	while(cin >> n)
	{
		cout << f(n) << endl;
	}
	return 0;
}
