#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n; map<string, set<string>> get_loc; vector<string> order;
  for (int i = 0; i < n; i++) {
    string id, vis; cin >> id; order.push_back(id);
    while (cin >> vis && vis != "*") {
      get_loc[id].insert(vis);
    }
  }
  bool found = false;
  string target_id; cin >> target_id;
  set<string> target = get_loc[target_id];
  for (auto &o: order) {
    if (o == target_id) continue;
    for (auto &e: get_loc[o]) {
      if (target.find(e) != target.end()) {
        cout << ">> " << o << '\n'; found = true;
        break;
      }
    }
  }
  if (!found) cout << ">> Not Found" << endl;
} 
