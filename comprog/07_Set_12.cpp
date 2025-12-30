#include <bits/stdc++.h>
using namespace std;
int main() {
  set<int> s; int n, cnt = 0;
  while (cin >> n) {
    auto is = s.insert(n);
    cnt++;
    if (!is.second) {
      cout << cnt;
      return 0;
    }
  }
  cout << "-1";
}
