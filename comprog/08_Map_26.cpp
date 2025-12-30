#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<string> lst; string station;
  while (cin >> station) lst.push_back(station);
  string loc = lst.back(); lst.pop_back();
  map<string, vector<string>> adj;
  for (int i = 0; i < lst.size(); i+=2) {
    string u = lst[i], v = lst[i + 1];
    adj[u].push_back(v); adj[v].push_back(u);
  }
  set<string> res; res.insert(loc);
  for (auto &a1: adj[loc]) {
    res.insert(a1);
    for (auto &a2: adj[a1]) {
      res.insert(a2);
    }
  }
  for (auto &r: res) cout << r << '\n';
}
