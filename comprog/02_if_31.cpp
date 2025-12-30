#include <bits/stdc++.h>
using namespace std;
#define PI M_PI

bool isLeap (int n) {
    if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) return true;
    else return false;
}

int main () {
    int d1, m1, by1, d2, m2, by2; cin >> d1 >> m1 >> by1 >> d2 >> m2 >> by2;
    int y1 = by1 - 543; int y2 = by2 - 543;

    int mid = abs(y2 - y1 - 1) * 365;
    vector<int> day_in_month_red = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<int> day_in_month_blue = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeap(y1)) day_in_month_red[2] = 29;
    if (isLeap(y2)) day_in_month_blue[2] = 29;
    
    int red = day_in_month_red[m1] - d1 + 1;
    for (int i = m1 + 1; i <= 12; i++) red += day_in_month_red[i];

    int blue = d2 - 1;
    for (int i = 0; i < m2; i++) blue += day_in_month_blue[i];

    int t = red + mid + blue;
    double physical = sin(2 * PI * t / 23);
    double emotional = sin(2 * PI * t / 28);
    double intellectual = sin(2 * PI * t / 33);
    cout << t << ' ' << round(physical * 100) / 100.0 << ' ' << round(emotional * 100) / 100.0 << ' ' << round(intellectual * 100) / 100.0;
}