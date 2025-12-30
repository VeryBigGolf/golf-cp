#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n; map<string, vector<string>> m;
  cin.ignore(); string s;
  for (int i = 0; i < n; i++) {
    getline(cin, s);
    int cma = s.find(", ");
    string song = s.substr(0, cma);
    string singer = s.substr(cma + 2);
    m[song].push_back(singer);
  }
  string q; getline(cin, q); q += ",";
  string query = "";
  for (int i = 0; i < q.size(); i++) {
    if (q[i] == ',') {
      i++;
      cout << query << " -> ";
      if (m[query].empty()) {
        cout << "Not found";
      } else {
        for (auto &e: m[query]) {
          cout << e;
          if (e != m[query].back()) cout << ", ";
        }
      }
      query = "";
      cout << '\n';
    } else {
      query += q[i];
    }
  }
}
