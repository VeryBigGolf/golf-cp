#include <bits/stdc++.h>
using namespace std;
int main () {
    vector<int> chk(10, 0);
    string s; getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if('0' <= s[i] && s[i] <= '9') chk[s[i] - '0']++;
    }

    bool none = true;
    string ans = "";
    for (int i = 0; i < 10; i++) {
        if (chk[i] == 0) {
            ans += to_string(i);
            ans += ",";
            none = false;
        }
    }

    if (none) cout << "None";
    else cout << ans.substr(0, ans.size() - 1);
}