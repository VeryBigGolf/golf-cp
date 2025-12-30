#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    int min_zig = 1e9;
    int min_zag = 1e9;
    int max_zig = -1e9;
    int max_zag = -1e9;
    int cnt = 0;
    while (cin >> n) {
        if (n == -998) {
            cout << min_zig << ' ' << max_zag;
            break;
        }
        if (n == -999) {
            cout << min_zag << ' ' << max_zig;
            break;
        }
        if (cnt % 4 == 0) {
            min_zig = min(n, min_zig);
            max_zig = max(n, max_zig);
        }
        if ((cnt - 3) % 4 == 0) {
            min_zig = min(n, min_zig);
            max_zig = max(n, max_zig);
        }
        if ((cnt - 1) % 4 == 0) {
            min_zag = min(n, min_zag);
            max_zag = max(n, max_zag);
        }
        if ((cnt - 2) % 4 == 0) {
            min_zag = min(n, min_zag);
            max_zag = max(n, max_zag);
        }
        cnt++;
    }
}