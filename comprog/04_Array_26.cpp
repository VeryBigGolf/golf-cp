#include <bits/stdc++.h>
using namespace std;
int main () {
  int n; cin >> n;
  vector<int> all(n * n); for (auto &in : all) cin >> in;
  int where_zero;
  vector<int> find_inversion;
  for (int i = 0; i < n * n; i++) {
    if (all[i] == 0) where_zero = i / n;
    else find_inversion.push_back(all[i]);
  }
  int inversion_cnt = 0;
  for (int i = 0; i < find_inversion.size(); i++) {
    for (int j = i + 1; j < find_inversion.size(); j++) {
      if (find_inversion[i] > find_inversion[j]) inversion_cnt++;
    }
  }
  bool yes = false;
  if (n % 2 != 0) {
    if (inversion_cnt % 2 == 0) yes = true;
  } else {
    if (inversion_cnt % 2 != 0) {
      if (where_zero % 2 == 0) yes = true;
    } else {
      if (where_zero % 2 != 0) yes = true;
    }
  }
  if (yes) cout << "YES";
  else cout << "NO";
}
