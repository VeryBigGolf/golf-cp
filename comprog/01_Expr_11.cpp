#include <bits/stdc++.h>
using namespace std;
#define int long double 
#define PI M_PI

int flg(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;
    return n * flg(n - 1);
}

int32_t main () {
    int ans =  (PI - (flg(10) / pow(8, 8)) + pow(log(9.7), ((7 / sqrt(71)) - sin(40 * PI / 180)))) / (pow(1.2, pow(2.3, 1.0 / 3)));
    cout << ans;
}