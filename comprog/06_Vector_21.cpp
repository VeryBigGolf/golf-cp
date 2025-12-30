#include <bits/stdc++.h>
using namespace std;
int main() {
  string s; cin >> s;
  s += "$";
  vector<string> v(s.size()); v[0] = s;
  for (int i = 1; i < s.size(); i++) {
    v[i] = v[i - 1].substr(1) + v[i - 1][0];
  }
  sort(v.begin(), v.end());
  string res = "";
  for (auto &elem: v) res += elem.back();
  cout << res;
}
