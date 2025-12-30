#include <bits/stdc++.h>
using namespace std;
int main() {
  string s1, s2, word;
  getline(cin, s1); getline(cin, s2);
  multiset<char> a1, a2;
  stringstream ss1(s1), ss2(s2);
  while (ss1 >> word) {
    for (char c: word) a1.insert(tolower(c));
  }
  while (ss2 >> word) {
    for (char c: word) a2.insert(tolower(c));
  }
  if (a1 == a2) cout << "YES";
  else cout << "NO";
}
