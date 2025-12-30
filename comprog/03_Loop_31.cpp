#include <bits/stdc++.h>
using namespace std;
#define int long long

int ten_pow(size_t n) {
    int res = 1;
    for (int i = 0; i < n; i++) res *= 10;
    return res;
}

int32_t main () {
    string n, m; cin >> n >> m;
    int ans = 0;
    if (n.size() == m.size()) {
        ans +=  n.size() * (stoll(m) - stoll(n) + 1);
    } else {
        int front = (ten_pow(n.size()) - stoll(n)) * n.size();
        int mid = 0;
        for (int i = n.size() + 1; i < m.size(); i++) {
            mid += 9 * ten_pow(i - 1) * i;
        }
        int back = (stoll(m) - ten_pow(m.size() - 1) + 1) * m.size();
        ans += front + mid + back;
    }
    cout << ans;
}