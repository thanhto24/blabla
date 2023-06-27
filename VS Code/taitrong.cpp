#include <iostream>

using namespace std;

const int maxN = 1e5 + 5;

int n, T, a[maxN];
long long tree[4 * maxN];

void update(int id, int l, int r, int pos, int val) {
    if (l > pos || r < pos) return;
    if (l == r) {
        tree[id] = val;
        return;
    }
    int mid = (l + r)/2;
    update(2 * id, l, mid, pos, val);
    update(2 * id + 1, mid + 1, r, pos, val);
    tree[id] = tree[2 * id] + tree[2 * id + 1];
}

long long getVal(int id, int l, int r, int u, int v) {
    if (l >  v || r <  u) return 0;
    if (l >= u && r <= v) return tree[id];
    int mid = (l + r)/2;
    return getVal(2 * id, l, mid, u, v) + getVal(2 * id + 1, mid + 1, r, u, v);
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> T;
    while (T--){
        int num, x, y;
        cin >> num >> x >> y;
        if (num == 1) update(1, 1, n, x, y);
        else cout << getVal(1, 1, n, x, y) << '\n';
    }
    return 0;
}