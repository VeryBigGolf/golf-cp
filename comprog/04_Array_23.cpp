#include <bits/stdc++.h>
using namespace std;
int main () {
  int n; cin >> n;
  map<string, int> get_tax;
  while(n--) {
    string country; int tax;
    cin >> country >> tax;
    get_tax[country] = tax;
  }
  vector<string> to_go;
  string s;
  while(cin >> s) {
    to_go.push_back(s.substr(4, 2));
  }
  int ans = 0;
  for (int i = 0; i < to_go.size(); i++) {
    if (i != 0 && to_go[i] != to_go[i - 1]) {
      ans += get_tax[to_go[i]];
    }
  }
  cout << ans;
}
