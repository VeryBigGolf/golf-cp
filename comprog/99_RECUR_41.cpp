#include <bits/stdc++.h>
using namespace std;

int n, a, b;
bool found = false;
map<int, vector<int>> adj;

void solve(int u, vector<int> &path) {
    if (u == b) {
        found = true;
        for (int i = 0; i < path.size(); i++) {
            cout << path[i] << (i == path.size() - 1 ? "" : " -> ");
        }
        cout << "\n";
        return;
    }
    for (int v : adj[u]) {
        path.push_back(v);
        solve(v, path);
        path.pop_back();
    }
}

int main() {
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    for (auto &pair : adj) {
        sort(pair.second.begin(), pair.second.end());
        auto last = unique(pair.second.begin(), pair.second.end());
        pair.second.erase(last, pair.second.end());
    }
    vector<int> path = {a};
    solve(a, path);
    if (!found) cout << "no";
}
