#include <bits/stdc++.h>
using namespace std;

int getSum(vector<int> &v) {
  return accumulate(v.begin(), v.end(), 0);
}

bool compareBins(vector<int> &a, vector<int> &b) {
  int sumA = getSum(a);
  int sumB = getSum(b);
  if (sumA != sumB) return sumA > sumB;
  if (a.size() != b.size()) return a.size() < b.size();
  return a < b;
}

int main() {
  string mode; cin >> mode;
  vector<int> items; vector<vector<int>> bins; int val;
  while (cin >> val) items.push_back(val);
  for (int item: items) {
    if (mode == "first") {
      bool place = false;
      for (auto &bin: bins) {
        if (getSum(bin) + item <= 100) {
          bin.push_back(item);
          place = true;
          break;
        }
      }
      if (!place) bins.push_back({item});
    } else if (mode == "best") {
      int bestidx = -1;
      int minleft = 101;
      for (int i = 0; i < bins.size(); i++) {
        int currsum = getSum(bins[i]);
        if (currsum + item <= 100) {
          int spaceleft = 100 - (currsum + item);
          if (spaceleft < minleft) {
            minleft = spaceleft;
            bestidx = i;
          }
        }
      }
      if (bestidx != -1) {
        bins[bestidx].push_back(item);
      } else {
        bins.push_back({item});
      }
    }
  }
  for (auto &bin : bins) sort(bin.begin(), bin.end());
  sort(bins.begin(), bins.end(), compareBins);
  for (auto &bin: bins) {
    for (auto &e: bin) {
      cout << e << ' ';
    }
    cout << '\n';
  }
}
