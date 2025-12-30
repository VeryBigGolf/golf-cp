#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int started_queue = 0;
    int queue_cnt = 0;  
    int call_q = 0;     
    int curr_t, lastest_q, ordered_t, lastest_t;
    int time_used = 0;
    queue<pair<int, int>> q; 
    for (int i = 0; i < n; i++) {
        string mode; cin >> mode;
        if (mode == "reset") {
            int sq; cin >> sq;
            started_queue = sq;
        } 
        else if (mode == "new") {
            int t; cin >> t;
            curr_t = t;
            q.emplace(started_queue, t);
            cout << ">> ticket " << started_queue++ << '\n';
            queue_cnt++; 
        } 
        else if (mode == "next") {
            if (!q.empty()) {
                lastest_q = q.front().first;
                lastest_t = q.front().second; 
                q.pop();
                cout << ">> call " << lastest_q << '\n';
            }
        } 
        else if (mode == "order") {
            int t; cin >> t;
            ordered_t = t;
            int dt = t - lastest_t; 
            cout << ">> qtime " << lastest_q << ' ' << dt << '\n';
            time_used += dt;
            call_q++; 
        } 
        else if (mode == "avg_qtime") {
            if (call_q > 0) {
                double avg_time = round(100.0 * time_used / call_q) / 100.0;
                cout << ">> avg_qtime " << avg_time << '\n';
            } else {
                cout << ">> avg_qtime 0" << '\n';
            }
        }
    }
}
