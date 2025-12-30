#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    int y = (n - 543) % 100;
    int ans = (y + y / 4 + 11) % 7;
    cout << ans;
}