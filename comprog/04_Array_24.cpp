#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long
#define all(x) begin(x), end(x)
#define pb emplace_back

int32_t main() {
  cin.tie(nullptr)->sync_with_stdio(0);
  int n; cin >> n;
  vector<int> cake(n); for (auto &in : cake) cin >> in;
  for (auto c : cake) cout << c << ' ';
  cout << '\n';
  int remain = n;
  while (remain > 1) {
    auto end_scope = cake.begin() + remain;
    auto it = max_element(cake.begin(), end_scope);
    int dist = distance(cake.begin(), it);
    if (dist == remain - 1) {
      remain--;
    } else {
      if (dist > 0) {
        reverse(cake.begin(), it + 1); 
        for (auto c : cake) cout << c << ' ';
        cout << '\n';
      }

      reverse(cake.begin(), end_scope);
      for (auto c : cake) cout << c << ' ';
      cout << '\n';

      remain--;
    }
  }
  return 0;
}

