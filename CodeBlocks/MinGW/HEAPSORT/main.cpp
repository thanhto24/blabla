#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int N;
void max_heap(int A[], int i) {
    int largest;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left <= N and A[left] > A[i])
        largest = left;
    else
        largest = i;
    if (right <= N and A[right] > A[largest])
        largest = right;
    if (largest != i) {
        swap(A[i], A[largest]);
        max_heap(A, largest);
    }
}

void run_maxheap(int A[]) {
    for (int i = N / 2; i >= 1; i--) {
        max_heap(A, i);
    }
}
bool cmp(int a, int b)
{
    return a>b;
}

int main() {
	cin >> N;
	int A[N+1],b[N+1],f[1000];
	A[0]=-1;
	for(int i=1;i<=N;i++) cin >> A[i], b[i]=A[i],f[A[i]]=0;
	sort(b+1,b+N+1,cmp);
    run_maxheap(A);
    int tmp=1;
    while(tmp<=N)
    {
        for (int i = tmp; i < N+1; i++) {
        if(i==tmp+1&&f[b[i]]==0)
        {
            cout << b[i] << " ";
            f[b[i]]++;
        }
        if(f[A[i]]==0)
        cout << A[i] << " ";
        }
        cout << endl;
        tmp++;
    }

    return 0;
}
