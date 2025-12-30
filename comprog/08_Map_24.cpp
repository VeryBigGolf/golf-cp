#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n; map<string, double> get_price;
  while (n--) {
    string s; double t; cin >> s >> t; get_price[s] = t;
  }
  cin >> n; map<string, double> sales;
  double total_price = 0;
  while (n--) {
    string s; int t; cin >> s >> t;
    if (get_price.find(s) != get_price.end()) {
      double paid = get_price[s] * t;
      total_price += paid;
      sales[s] += paid;
    }
  }
  if (total_price == 0) {
    cout << "No ice cream sales"; return 0;
  } else {
    cout << "Total ice cream sales: " << total_price << '\n';
  }
  double max_price = -1;
  for (auto &[a, p]: sales) {
    if (p > max_price) max_price = p;
  }
  cout << "Top sales: ";
  for (auto &[a, p]: sales) {
    if (p == max_price) cout << a << ' ';
  }
}
