#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  vector<tuple<double, int, double, double>> res; double x, y;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    res.emplace_back(sqrt(x * x + y * y), i, x, y);
  }
  sort(res.begin(), res.end());
  cout << '#' << get<1>(res[2]) << ": (" << get<2>(res[2]) << ", "<< get<3>(res[2]) << ')';
}
