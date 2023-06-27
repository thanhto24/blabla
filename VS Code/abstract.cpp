#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n][n];
    int dong = n, cot = n, k = 1, p = 0, i, j;
    while(k <= n*n){
		for(i = p; i < cot; i++) 
			a[p][i] = k++;
		for(i = p+1; i < dong; i++) 
			a[i][cot-1] = k++;
		if ( p != dong-1){
			for(i = cot-2; i >=p; i--) 
				a[dong-1][i] = k++;
		}	
		if(p!=cot-1){
			for(i = dong-2; i > p; i--) 
				a[i][p] = k++;
		}	
		p++;dong --; cot --;
	}
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}