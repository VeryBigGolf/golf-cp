#include <bits/stdc++.h>
using namespace std;
#define int double
int32_t main () {
    int sum = 0, tmp, cnt = 0;
    while (cin >> tmp) {
        if (tmp == -1) break;
        sum += tmp;
        cnt++;
    }
    if (cnt != 0)
    cout << round(sum / cnt * 100) / 100.0;
    else cout << "No Data";
}