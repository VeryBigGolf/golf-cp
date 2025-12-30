#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n;
  map<string, int> get_seat_left;
  for (int i = 0; i < n; i++) {
    string s; int tmp; cin >> s >> tmp;
    get_seat_left[s] = tmp;
  }
  int m; cin >> m;
  map<string, vector<string>> get_want;
  vector<pair<double, string>> q;
  for (int i = 0; i < m; i++) {
    string sid, a, b, c, d; double score;
    cin >> sid >> score >> a >> b >> c >> d;
    get_want[sid] = {a, b, c, d};
    q.emplace_back(score, sid);
  }
  sort(q.begin(), q.end(), greater<pair<double, string>>());
  vector<pair<string, string>> res;
  for (auto &[score, sid]: q) {
    for (auto faculty: get_want[sid]) {
      if (get_seat_left[faculty] > 0) {
        res.emplace_back(sid, faculty);
        get_seat_left[faculty]--;
        break;
      }
    }
  }
  sort(res.begin(), res.end());
  for (auto &[sid, faculty]: res) {
    cout << sid << ' ' << faculty << '\n';
  }
}
