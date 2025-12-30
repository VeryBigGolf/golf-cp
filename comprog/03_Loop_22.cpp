#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    int k = 2;
    string ans = "";
    while (k <= n) {
        if (n % k == 0) {
            ans += to_string(k);
            ans += "*";
            n /= k;
        } else k++;
    }
    ans = ans.substr(0, ans.size() - 1);
    cout << ans;
}