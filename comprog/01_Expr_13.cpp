#include <bits/stdc++.h>
using namespace std;
#define int long double
int32_t main () {
    int a, b, c; cin >> a >> b >> c;
    int x1 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    int x2 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << round(x1*1e3)/1e3 << ' ';
    cout << round(x2*1e3)/1e3 << '\n';
}