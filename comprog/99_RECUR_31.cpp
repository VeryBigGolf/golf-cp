#include <bits/stdc++.h>
using namespace std;

set<string> ans;
void solve (int len, string s, vector<bool> &vis, string &res) {
  if (len == s.size()) {
    ans.insert(res);
  }
  else for (int i = 0; i < s.size(); i++) {
    if (!vis[i]) {
      vis[i] = true;
      res.push_back(s[i]);
      solve(len + 1, s, vis, res);
      vis[i] = false;
      res.pop_back();
    }
  }

}

int main() {
  string s; cin >> s;
  vector<bool> vis(s.size(), false);
  string res = "";
  solve(0, s, vis, res);
  for (auto &r : ans) cout << r << ' ';
}
