#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n; map<string, string> m;
  for (int i = 0; i < n; i++) {
    string nn, sn, tel; cin >> nn >> sn >> tel;
    string fn = nn + " " + sn;
    m[fn] = tel; m[tel] = fn;
  }
  cin >> n; cin.ignore();
  for (int i = 0; i < n; i++) {
    string q; getline(cin, q);
    cout << q << " --> "; auto it = m.find(q);
    if (it != m.end()) cout << m[q] << '\n';
    else cout << "Not found" << '\n';
  }
}
