#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<string> v;
  string s;
  while (cin >> s) {
    v.push_back(s);
  }
  string init = v.front();
  string final = v.back();
  int a, b;
  for (int i = 0; i < init.size(); i++) {
    if (init[i] == 'a' || init[i] == 'e' || init[i] == 'i' || init[i] == 'o' || init[i] == 'u') {
      a = i; break;
    }
  }

  for (int i = 0; i < final.size(); i++) {
    if (final[i] == 'a' || final[i] == 'e' || final[i] == 'i' || final[i] == 'o' || final[i] == 'u') {
      b = i; break;
    }
  }

  string tmp1 = init.substr(a);
  string tmp2 = final.substr(b);
  
  init = init.substr(0, a) + tmp2;
  final = final.substr(0, b) + tmp1;

  v.front() = init;
  v.back() = final;
  for (auto &x : v) cout << x << ' ';
}
