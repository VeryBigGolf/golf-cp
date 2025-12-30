#include <bits/stdc++.h>
using namespace std;

void upgrade(string &grade) {
  vector<string> u = {"F", "D", "D+", "C", "C+", "B", "B+", "A", "A"};
  for (int i = 0; i < u.size(); i++) {
    if (grade == u[i]) {
      grade = u[i + 1];
      break;
    }
  }
}

int main() {
  string sid, grade;
  vector<pair<string, string>> res;
  while (cin >> sid) {
    if (sid == "q") break;
    cin >> grade;
    res.emplace_back(grade, sid);
  }
  while (cin >> sid) {
    for (auto &[g, s]: res) {
      if (s == sid) upgrade(g);
    }
  }
  for (auto [g, s]: res) {
    cout << s << ' ' << g << '\n';
  } 
}
