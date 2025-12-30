#include <bits/stdc++.h>
using namespace std;

string add(string a, string b) {
  int n = max(a.size(), b.size());
  while (a.size() < n) a = "0" + a;
  while (b.size() < n) b = "0" + b;
  int mem = 0;
  string ans = "";
  for (int i = n - 1; i >= 0; i--) {
    int x = a[i] - '0';
    int y = b[i] - '0';
    int z = x + y + mem;
    mem = z / 10;
    string c = to_string(z % 10);
    ans = c + ans;
  }
  if (mem > 0) ans = to_string(mem) + ans;
  return ans;

}
int main() {
  string s;
  string ans = "";
  while (cin >> s) {
    if (s == "END") {
      cout << ans;
    }
    ans = add(ans, s);
  }
}
