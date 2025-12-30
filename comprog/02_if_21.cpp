#include <bits/stdc++.h>
using namespace std;
#define int long long 
int32_t main () {
    int n; cin >> n;
    if (n < 1e3) cout << n;
    if (n >= 1e3 && n < 1e4) cout << round(n / 1e3 * 10) / 10.0 << "K";
    if (n >= 1e4 && n < 1e6) cout << round(n / 1e3) << "K";
    if (n >= 1e6 && n < 1e7) cout << round(n / 1e6 * 10) / 10.0 << "M";
    if (n >= 1e7 && n < 1e9) cout << round(n / 1e6) << "M";
    if (n >= 1e9 && n < 1e10) cout << round(n / 1e9 * 10) / 10.0 << "B";
    if (n >= 1e10) cout << round(n / 1e9) << "B";
}