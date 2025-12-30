#include <bits/stdc++.h>
using namespace std;
int main() {
  string name, type; map<string, vector<string>> m; vector<string> order;
  map<string, bool> used;
  while (cin >> name) {
    cin >> type; m[type].push_back(name);
    order.push_back(type); used[type] = false;
  }
  for (auto &q: order) {
    if (!used[q]) {
      used[q] = true;
      cout << q << ": ";
      for (auto &n: m[q]) cout << n << ' ';
      cout << '\n';
    }
  }
}
