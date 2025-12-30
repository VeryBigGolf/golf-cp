#include <bits/stdc++.h>
using namespace std;
int main () {
  int n; cin >> n;
  vector<int> v(2 * n); for (auto &in : v) cin >> in;
  string command; cin >> command;
  int max_start_left = -1e9;
  int max_start_right = -1e9;
  int min_start_left = 1e9;
  int min_start_right = 1e9;
  for (int i = 0; i < v.size(); i++) {
    if (i % 4 == 0 || i % 4 == 3) {
      max_start_left = max(v[i], max_start_left);
      min_start_left = min(v[i], min_start_left);
    } else {
      max_start_right = max(v[i], max_start_right);
      min_start_right = min(v[i], min_start_right);
    }
  }
  if (command == "Zig-Zag") {
    cout << min_start_left << ' ' << max_start_right;
  } else if (command == "Zag-Zig") {
    cout << min_start_right << ' ' << max_start_left;
  }
}
