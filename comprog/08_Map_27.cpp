#include <bits/stdc++.h>
using namespace std;
int main() {
  map<string, string> m;
  vector<string> t = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
  for (int i = 2; i < t.size(); i++) {
    string tmp = "";
    for (int j = 0; j < t[i].size(); j++) {
      tmp += to_string(i);
      m[tmp] = t[i][j]; m[string(1, t[i][j])] = tmp;
    }
  }
  m["0"] = " "; m[" "] = "0";
  string line;
  while (getline(cin, line)) {
    string mode = line.substr(0, 3);
    string text = line.substr(4); stringstream ss(text);
    cout << ">> "; string token;
    if (mode == "T2K") {
      for (int i = 0; i < text.size(); i++) {
        cout << m[string(1, tolower(text[i]))] << ' ';
      }
    } else if (mode == "K2T") {
      while (ss >> token) {
        cout << m[token];
      }
    }
    cout << '\n';
  }
}
