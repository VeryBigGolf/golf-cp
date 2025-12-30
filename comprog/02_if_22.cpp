#include <bits/stdc++.h>
using namespace std;
int main () {
    int d, m, by; cin >> d >> m >> by;
    bool isLeap = false;
    int y = by - 543;
    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
        isLeap = true;
    }
    vector<int> day_in_month = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeap) day_in_month[2] = 29;
    int sum_before = 0;
    for (int i = 1; i < m; i++) sum_before += day_in_month[i];
    cout << sum_before + d;

}