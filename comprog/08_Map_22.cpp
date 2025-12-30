#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n; map<string, double> get_val; get_val["THB"] = 1.0;
  for (int i = 0; i < n; i++) {
    string crypto; double val; cin >> crypto >> val; get_val[crypto] = val;
  }
  int start; cin >> start; vector<int> res; res.push_back(start);
  string t; vector<string> transfer; while (cin >> t) transfer.push_back(t);
  for (int i = 0; i < transfer.size(); i++) {
    if (i != 0) {
      start = (start * get_val[transfer[i - 1]]) / get_val[transfer[i]];
    }
    cout << start << ' ' << transfer[i];
    if (i != transfer.size() - 1) cout << " -> ";
  }
}
