#include <bits/stdc++.h>
using namespace std;
int main() {
  int target, cnt = 0; cin >> target;
  int n; set<int> s;
  while (cin >> n) s.insert(n);
  for (auto &elem: s) {
    if (s.find(target - elem) != s.end()) cnt++;
  }
  cout << cnt / 2;
}
