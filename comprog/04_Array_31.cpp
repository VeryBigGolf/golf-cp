#include <bits/stdc++.h>
using namespace std;
int main () {
  vector<string> ones = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  vector<string> teens = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
  vector<string> tens = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
  vector<string> powers = {"trillion", "billion", "million", "thousand"};

  string s; cin >> s;
  if (s == "0") {
    cout << "zero";
    return 0;
  }
  int n = s.size();
  for (int i = 0; i < 15 - n; i++) s = "0" + s;
  for (int i = 0; i < 15; i+=3) {
    string t = s.substr(i, 3);
    if (t == "000") continue;
    if (t[0] != '0') {
      cout << ones[t[0] - '0'] << " hundred ";
    }
    if (t[1] >= '2') {
      cout << tens[t[1] - '0'] << ' ';
      if (t[2] != '0') cout << ones[t[2] - '0'] << ' ';
    } else if (t[1] == '1') {
      cout << teens[t[2] - '0'] << ' ';
    } else if (t[1] == '0') {
      if (t[2] != '0') cout << ones[t[2] - '0'] << ' ';
    }
    if (i < 12)
    cout << powers[i / 3] << ' ';
  }
}
