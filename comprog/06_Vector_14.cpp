#include <bits/stdc++.h>
using namespace std;
int main() {
  map<int, int> m; int n;
  while (cin >> n) {
    m[n]++;
  }
  cout << m.size() << '\n';
  for (auto i = m.begin(); i != next(m.begin(), 10); i++) {
    cout << i->first << ' ';
  }
}
