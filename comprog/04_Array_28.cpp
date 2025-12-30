#include <bits/stdc++.h>
using namespace std;
int main () {
  string s; getline(cin, s);
  map<char, int> m;
  for (int i = 0; i < s.size(); i++) {
    if ('a' <= tolower(s[i]) && tolower(s[i] <= 'z')) m[tolower(s[i])]++;
  }
  for (auto &x : m) {
    cout << x.first << " -> " << x.second << '\n';
  } 
}
