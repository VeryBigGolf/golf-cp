#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  vector<int> v;
  v.push_back(n);
  while (n != 1) {
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = 3 * n + 1;
    }
    v.push_back(n);
  }
  while (v.size() > 15) v.erase(v.begin());
  for (auto &out: v) {
    cout << out;
    if (out != v.back()) cout << "->";
  }
}
