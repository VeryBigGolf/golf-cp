#include <bits/stdc++.h>
using namespace std;

vector<string> G = {"F", "D", "D+", "C", "C+", "B", "B+", "A", "A"};
string upgrade (string grade) {
  for (int i = 0; i < G.size(); i++) {
    if (grade == G[i]) return G[i + 1];
  }
  return grade;
}
string downgrade (string grade) {
  if (grade == "F") return "F";
  for (int i = 0; i < G.size(); i++) {
    if (grade == G[i]) return G[i - 1];
  }
  return grade;
}
int get_level (string grade) {
  for (int i = 0; i < G.size(); i++) {
    if (grade == G[i]) return i;
  }
  return - 1;
}
struct Student {
  string sid;
  string grade;
  int input_order;
};
bool comp (Student &a, Student &b) {
  int m = get_level(a.grade);
  int n = get_level(b.grade);
  if (m != n) {
    return m > n;
  }
  return a.input_order < b.input_order;
}
int main() {
  int n; cin >> n;
  map<string, string> get_grades;
  vector<string> ordered;
  for (int i = 0; i < n; i++) {
    string s, g; cin >> s >> g;
    get_grades[s] = g;
    ordered.push_back(s);
  }
  vector<string> adjustment;
  string token; while (cin >> token) adjustment.push_back(token);
  for (auto &c: adjustment) {
    string sid = c.substr(0, c.size() - 1);
    char changes = c[c.size() - 1];
    get_grades[sid] = (changes == '+' ? upgrade(get_grades[sid]) : downgrade(get_grades[sid]));
  }
  vector<Student> list;
  for (int i = 0; i < n; i++) {
    list.push_back({ordered[i], get_grades[ordered[i]], i});
  }
  sort(list.begin(), list.end(), comp);
  for (auto &[s, g, i]: list) {
    cout << s << ' ' << g << '\n';
  }
}
