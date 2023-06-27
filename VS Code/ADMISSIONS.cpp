#include <bits/stdc++.h>

using namespace std;

struct student{
    int id, math, IT, sum = 0;
};

bool cmp(student a, student b)
{
    return a.math > b.math || a.IT > b.IT || a.sum > b.sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, c;
    student Student[1000];
    cin >> n >> a >> b >> c;
    for(int i = 1; i <= n; i++)
        cin >> Student[i].math,
        Student[i].id = i,
        Student[i].sum += Student[i].math;
    for(int i = 1; i <= n; i++)
        cin >> Student[i].IT,
        Student[i].sum += Student[i].IT;
    sort(Student+1,Student+n+1,cmp);
    int i = 1;
    while(i<=a)
    {
        kq.push_back(Student[i].id);
        was[i] = true;
        i++;
    }
    
    return 0;
}