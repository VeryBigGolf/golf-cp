#include <bits/stdc++.h>
using namespace std;
#define int double
int32_t main () {
    int xe, ye, re, rp, xm, ym;
    cin >> xe >> ye >> re >> rp >> xm >> ym;
    int C = sqrt((xm - xe) * (xm - xe) + (ym - ye) * (ym - ye));
    int ratio = (abs(re - rp)) / C;
    int a = (xm - xe) * ratio + xe;
    int b = (ym - ye) * ratio + ye;
    cout << round(a) << ' ' << round(b);
}