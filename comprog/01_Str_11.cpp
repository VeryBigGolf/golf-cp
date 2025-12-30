#include <bits/stdc++.h>
using namespace std;
int main () {
    string s; cin >> s;
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += (s.size() - i + 1) * (s[i] - '0');
    }
    int n12 = (11 - sum % 11) % 10;
    string ans = s.substr(0, 1) + "-" + s.substr(1, 4) + "-" + s.substr(5, 5) + "-" + s.substr(10, 2) + "-" + to_string(n12);
    cout << ans;
}
