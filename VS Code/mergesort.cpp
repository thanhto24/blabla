#include <bits/stdc++.h>

using namespace std;

long long merge(int a[], int l, int m, int r)
{
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    long long cnt = 0;
    while (i < x.size() && j < y.size())
    {
        if (x[i] <= y[j])
        {
            a[l] = x[i];
            l++;
            i++;
        }
        else
        {
            cnt += x.size() - i;
            a[l] = y[j];
            l++;
            j++;
        }
    }
    while (i < x.size())
        a[l] = x[i], l++, i++;
    while (j < y.size())
        a[l] = y[j], l++, j++;
    return cnt;
}

long long mergeSort(int a[], int l, int r)
{
    long long cnt = 0;
    if (l < r)
    {
        int m = (l + r) / 2;
        cnt += mergeSort(a, l, m);
        cnt += mergeSort(a, m + 1, r);
        cnt += merge(a, l, m, r);
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << mergeSort(a, 0, n - 1);
    return 0;
}