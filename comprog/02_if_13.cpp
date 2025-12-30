#include <bits/stdc++.h>
using namespace std;
#define int long double
int32_t main () {
    int a, b, c, d; cin >> a >> b >> c >> d;
    int mn = 1e9;
    if (a < mn) mn = a;
    if (b < mn) mn = b;
    if (c < mn) mn = c;
    if (d < mn) mn = d;
    
    int mx = -1e9;
    if (a > mx) mx = a;
    if (b > mx) mx = b;
    if (c > mx) mx = c;
    if (d > mx) mx = d;

    int sum = a + b + c + d -mn - mx;
    int avg = sum / 2;
    cout << round(avg * 100.0) / 100.0;
}