#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n; map<string, string> m;
  for (int i = 0; i < n; i++) {
    string s, t; cin >> s >> t; m[s] = t; m[t] = s;
  }
  cin >> n;
  for (int i = 0; i < n; i++) {
    string key; cin >> key; auto it = m.find(key);
    if (it != m.end()) cout << m[key] << '\n';
    else cout << "Not found" << '\n';
  }
}
