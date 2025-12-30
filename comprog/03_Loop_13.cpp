#include <bits/stdc++.h>
using namespace std;
int main () {
    string target, s;
    getline(cin, target);
    getline(cin, s);

    int cnt = 0;
    int pos = s.find(target);
    while (pos != string::npos) {
        bool left_ok = (pos == 0) || !isalpha(s[pos - 1]);
        bool right_ok = (pos + target.length() == s.length()) || !isalpha(s[pos + target.length()]);
        if (left_ok && right_ok) cnt++;
        pos = s.find(target, pos + 1);
    } 

    cout << cnt;
}