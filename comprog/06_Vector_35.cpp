#include <bits/stdc++.h>
using namespace std;

map <string, int> get_value = 
{{"soon", 0}, {"neung", 1}, {"song", 2}, {"sam", 3},
  {"si", 4}, {"ha", 5}, {"hok", 6}, {"chet", 7}, {"paet", 8}, {"kao", 9},
  {"et", 1}, {"yi", 2}, {"sip", 10}, {"roi", 100}, {"phan", 1000}, {"muen", 10000},
  {"saen", 1e5}, {"lan", 1e6}};

int solve (string line) {
  stringstream ss(line);
  int total = 0;
  string word;
  int curr_digit = 0;
  bool has_digit = false;
  while (ss >> word) {
    int val = get_value[word];
    if (val >= 10) {
      if (!has_digit) curr_digit = 1;
      total += (val * curr_digit);
      curr_digit = 0;
      has_digit = false;
    } else {
      curr_digit = val;
      has_digit = true;
    }
  }
  return total + curr_digit;
}

int main() {
  string line;
  while (getline(cin, line)) {
    if (line == "q") break;
    cout << solve(line) << '\n';
  }
}
