#include <bits/stdc++.h>
using namespace std;
#define ds pair<double, string>

struct partylist {
  string name;
  int member_cnt;
  int score;
};
bool comp (partylist &a, partylist &b) {
  if (a.member_cnt != b.member_cnt) return a.member_cnt > b.member_cnt;
  return a.score > b.score;
};
int main() {
  string a; int sum = 0;
  map <string, int> get_score;
  while (cin >> a) {
    if (a == "END") break;
    int b; cin >> b;
    get_score[a] = b;
    sum += b;
  }
  double avg = sum / 100.0;
  map<string, int> get_member;
  priority_queue<ds> remain;
  int cnt = 0;
  for (auto &[name ,score]: get_score) {
    double devide = score / avg;
    get_member[name] = floor(devide);
    cnt += floor(devide);
    remain.emplace(devide - floor(devide), name);
  }
  while (cnt < 100) {
    string plus = remain.top().second;
    remain.pop();
    get_member[plus]++;
    cnt++;
  }
  vector<partylist> final_list;
  for (auto &[name, score] : get_score) {
    if (get_member[name] > 0) final_list.push_back({name, get_member[name], score});
  }
  sort(final_list.begin(), final_list.end(), comp);
  for (auto &[a, b, c]: final_list) cout << a << ' ' << b << ' ' << c << '\n';
}
