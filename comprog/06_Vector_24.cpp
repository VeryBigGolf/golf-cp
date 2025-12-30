#include <bits/stdc++.h>
using namespace std;
int main() {
  string s; double p;
  map <string, double> get_value;
  while (cin >> s) {
    if (s == "END") break;
    cin >> p;
    get_value[s] = -p;
  }
  map <string, double> recieve_order;
  while (cin >> s) {
    if (get_value.find(s) != get_value.end())
    recieve_order[s] += get_value[s];
  }
  vector<pair<double, string>> res;
  for (auto &[code, value] : recieve_order) {
    res.emplace_back(value, code);
  }
  sort(res.begin(), res.end());
  if (res.size() == 0) {
    cout << "No Sales";
    return 0;
  }
  while (res.size() > 3) res.pop_back();
  for (int i = 0; i < res.size(); i++) {
    cout << res[i].second << ' ' << -res[i].first << '\n';
  }

}
