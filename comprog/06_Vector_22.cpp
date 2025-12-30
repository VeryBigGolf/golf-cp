#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<pair<int, int>> v;
  int a[1000], k = 0, cnt = 1, mx = INT_MIN, in;
  while (cin >> in) a[k++] = in;
  for (int i = 0; i < k; i++) {
    if (i < k - 1 && a[i] == a[i + 1]) cnt++;
    else {
      if (cnt > mx) {
        mx = cnt;
        v.clear();
        v.emplace_back(a[i], i + 1);
      } else if (cnt == mx) {
        v.emplace_back(a[i], i + 1);
      }
      cnt = 1;
    }
  }
  sort(v.begin(), v.end());
  for (auto &x: v) {
    cout << x.first << " --> x[ " << x.second - mx << " : " << x.second << " ]" << '\n';
  }
}
