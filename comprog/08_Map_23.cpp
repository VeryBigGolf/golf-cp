#include <bits/stdc++.h>
using namespace std;
int main() {
  map<string, int> m;
  string sn, ar, genre, t;
  while (cin >> sn) {
    cin >> ar >> genre >> t;
    int i = t.find(':'); int mn = stoi(t.substr(0, i)); int sec = stoi(t.substr(i + 1, 2));
    m[genre] += mn * 60 + sec;
  }
  priority_queue<pair<int, string>> pq;
  for (auto &[g, len]: m) pq.emplace(len, g);
  int k = 3;
  while (!pq.empty() && k--) {
    auto [len, g] = pq.top();
    pq.pop();
    cout << g << " --> " << len / 60 << ":" << len % 60 << '\n';
  }
}
