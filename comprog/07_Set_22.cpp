#include <bits/stdc++.h>
using namespace std;

void pf (set<int> &s) {
  if (s.empty()) {
    cout << "empty set" << '\n';
    return;
  }
  for (auto &e: s) cout << e << ' ';
  cout << '\n';
}

int main() {
  string line; getline(cin, line); stringstream ss(line);
  set<int> s; int n; while (ss >> n) s.insert(n);
  set<int> un(s), in(s), diff(s);
  while (getline(cin, line)) {
    stringstream ss(line);
    set<int> in_tmp;
    while (ss >> n) {
      un.insert(n);
      auto in_find = in.find(n);
      if (in_find != in.end()) in_tmp.insert(n);
      auto diff_erase = diff.find(n);
      if (diff_erase != diff.end()) diff.erase(diff_erase);
    }
    in = in_tmp;
  }
  cout << "U: "; pf(un);
  cout << "I: "; pf(in);
  cout << "D: "; pf(diff);
}
