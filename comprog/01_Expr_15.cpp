#include <bits/stdc++.h>
using namespace std;
#define int double
int32_t main () {
    int x; cin >> x;
    int l = log(pow((x + 1), 2));
    int y = pow(x, sqrt(l)) / (10 - x);
    cout << round(y*1e6)/1e6;
}