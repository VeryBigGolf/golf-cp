#include <bits/stdc++.h>
using namespace std;
int main () {
    string s; cin >> s;
    string tmp = "";
    for (int i = 0; i < s.size(); i++) {
        if (tmp.size() == 0) tmp += s[i];
        else {
            if (s[i] == tmp[0]) tmp += s[i];
            else {
                cout << tmp[0] << ' ' << tmp.size() << ' ';
                tmp = s[i];
            }
        }
    }
    cout << tmp[0] << ' ' << tmp.size() << ' ';
}