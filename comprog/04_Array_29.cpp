#include <bits/stdc++.h>
using namespace std;
int main () {
  int n; cin >> n;
  vector<int> x1(n), y1(n), x2(n), y2(n);
  for (int i = 0; i < n; i++) {
    cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
  }
  vector<int> keep_area, keep_i, keep_j;
  bool has_overlap = false;
  int max_area = -1;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int diff_x = min(x2[i], x2[j]) - max(x1[i], x1[j]);
      int diff_y = min(y2[i], y2[j]) - max(y1[i], y1[j]);
      if (diff_x > 0 && diff_y > 0) {
        has_overlap = true;
        max_area = max(max_area, diff_x * diff_y);
        keep_area.push_back(diff_x * diff_y);
        keep_i.push_back(i);
        keep_j.push_back(j);
      }
    }
  }
  if (has_overlap) {
    cout << "Max overlapping area = " << max_area << '\n';
    for (int i = 0; i < keep_area.size(); i++) {
      if (keep_area[i] == max_area) {
        cout << "rectangles " + to_string(keep_i[i]) + " and " + to_string(keep_j[i]) << '\n';
      }
    }
  } else {
    cout << "No overlaps";
  }
} 

