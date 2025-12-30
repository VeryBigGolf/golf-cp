#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
#define ll long long
#define all(x) begin(x), end(x)
#define pb emplace_back

int32_t main() {
  cin.tie(nullptr)->sync_with_stdio(0);
  int n; cin >> n;
  vector<int> lift_number(n);
  vector<int> a(n);
  vector<int> b(n);
  for (int i = 0; i < n; i++) {
    cin >> lift_number[i] >> a[i] >> b[i];
  }
  int m; cin >> m;
  vector<int> p(m);
  vector<int> q(m);
  for (int i = 0; i < m; i++) {
    cin >> p[i] >> q[i];
  }
  for (int i = 0; i < m; i++) {
    vector<int> burden;
    for (int j = 0; j < n; j++) {
      if (min(a[j], b[j]) <= p[i] && p[i] <= max(a[j], b[j])) {
        burden.push_back(abs(b[j] - q[i]));
      } else {
        burden.push_back(abs(b[j] - p[i]) + abs(q[i] - p[i]));
      }
    }
    int print = burden[0];
    int ans = lift_number[0];
    for (int k = 0; k < n; k++) {
      if (burden[k] < print) {
        print = burden[k];
        ans = lift_number[k];
      } else if (burden[k] == print) {
        if (lift_number[k] < ans) {
          ans = lift_number[k];
        }
      }
    }    cout << ">> " << ans << ln;
  }
  return 0;
}
