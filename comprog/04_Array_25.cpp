#include <bits/stdc++.h>
using namespace std;

int find_right_wall(vector<int> &v, int idx) {
  int max_right = -1;
  for (int i = v.size() - 1; i >= idx; i--) {
    max_right = max(v[i], max_right);
  }
  return max_right;
}

int find_left_wall(vector<int> &v, int idx) {
  int max_left = -1;
  for (int i = 0; i <= idx; i++) {
    max_left = max(v[i], max_left);
  }
  return max_left;
}

int main () {
  int n; cin >> n;
  vector<int> before(n); for (auto &in : before) cin >> in;

  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans += min(find_left_wall(before, i), find_right_wall(before, i)) - before[i];
  }

  cout << ans;
}

