#include <bits/stdc++.h>
using namespace std;
int main () {
  string s;
  while (getline(cin, s)) {
    char t = s[s.length() - 1];
    string ans = "";
    int i = s.find(t);
    while (i != s.length() - 1) {
      int j = s.find(t, i + 1);
      ans += s.substr(i + 1, j - i - 1);
      i = s.find(t, j + 1);
    }
    cout << ans << '\n';
  }
}
