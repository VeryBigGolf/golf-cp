#include <bits/stdc++.h>
using namespace std;
#define int double
int32_t main () {
    int a; cin >> a; int L = 0; int U = a;
    int x = (L + U) / 2;
    while (abs(a - pow(10, x)) > 1e-10 * max(a, pow(10, x))) {
        if (pow(10, x) > a) {
            U = x;
        }
        if (pow(10, x) < a) {
            L = x;
        }
        x = (L + U) / 2.0;
    }
    cout << x;
}