#include <bits/stdc++.h>
using namespace std;
int main() {
  set<string> never_lose;
  string win, lose;
  vector<string> lose_list;
  while (cin >> win) {
    cin >> lose;
    never_lose.insert(win);
    lose_list.push_back(lose);
  }
  for (auto &l: lose_list) {
    auto it = never_lose.find(l);
    if (it != never_lose.end()) never_lose.erase(it);
  }
  if (never_lose.empty()) {
    cout << "None"; return 0;
  } else {
    for (auto &winner: never_lose) cout << winner << ' ';
  }
}
