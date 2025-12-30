#include <bits/stdc++.h>
using namespace std;
vector<bool> visited;
vector<pair<int, int>> v;
int n, a, b;
bool yes = false;
void solve(int u) {
  if (u == b) {
    yes = true;
    return;
  }
  for (int i = 0; i < n; i++) {
    if (!visited[i] && v[i].first == u) {
      visited[i] = true;
      solve(v[i].second);
      if (yes) return;
      visited[i] = false;
    }
  }
}

int main() {
   cin >> n >> a >> b;
  visited.resize(n, false);
  v.resize(n); for (auto &[i, j]: v) cin >> i >> j;
  solve(a);
  if (yes) cout << "yes";
  else cout << "no";
}
