#include <bits/stdc++.h>
using namespace std;
int main() {
  string s; cin >> s;
  string res = ""; res += s[0];
  for (int i = 1; i < s.size(); i++) {
    char curr = s[i];
    char prev = s[i - 1];
    bool con1 = isupper(curr);
    bool con2 = isalpha(prev) && isdigit(curr);
    bool con3 = isdigit(prev) && isalpha(curr);

    if (con1 || con2 || con3) res += ", ";
    res += curr;
  }
  cout << res;
}
