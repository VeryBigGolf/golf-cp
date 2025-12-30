#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> v;
  int n; cin >> n;
  int d = 0;
  while (cin >> n) {
    if (n == -1) break;
    if (d % 2 == 0) {
      v.push_back(n);
    } else {
      v.insert(v.begin(), n);
    }
    d++;
  }
  cout << '[';
  for (auto &out: v) {
    cout << out;
    if (out != v.back()) cout << ", ";
  }
  cout << ']';
}
