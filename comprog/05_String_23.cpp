#include <bits/stdc++.h>
using namespace std;
int main() {
  string s; int t; cin >> s >> t;
  int tmp1 = stoi(s.substr(4, 3)) + t;
  string ans1 = to_string(tmp1 % 1000);
  ans1 = "-" + string(3 - ans1.size(), '0') + ans1;
  int tmp2 = tmp1 / 1000;
  char ans2 = (s[2] - 'A' + tmp2) % 26 + 'A';
  int tmp3 = (s[2] - 'A' + tmp2) / 26;
  char ans3 = (s[1] - 'A' + tmp3) % 26 + 'A';
  int tmp4 = (s[1] - 'A' + tmp3) / 26;
  char ans4 = (s[0] - '0' + tmp4) + '0';
  cout << ans4 << ans3 << ans2 << ans1;
} 
