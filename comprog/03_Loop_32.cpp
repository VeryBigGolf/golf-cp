#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    map<char, int> get_score;
    get_score['R'] = 1;
    get_score['Y'] = 2;
    get_score['G'] = 3;
    get_score['N'] = 4;
    get_score['B'] = 5;
    get_score['P'] = 6;
    get_score['K'] = 7;
    cin.ignore();
    
    vector<char> want = {'Y', 'G', 'N', 'B', 'P', 'K'};
    while (n--) {
        int score = 0;
        string s; getline(cin, s);
        vector<char> v;
        for (auto &x : s) {
            if (x != ' ') v.push_back(x);
        } 
        bool isWrong = false;
        for (auto &x : v) {
            score += get_score[x];
        }

        if (v[0] != 'R') isWrong = true;
        
        int last = -1;
        for (int i = 0; i < v.size(); i += 2) {
            if (v[i] == 'R' && v[i + 1] == 'R') {
                isWrong = true;
                goto g;
            }
            if (v[i] != 'R') {
                last = i;
                break;
            }
        }

        if (last != -1) {
            if (v.size() - last > 7) isWrong = true;
            int idx = 0;
            for (int k = last; k < v.size(); k++) {
                if (v[k] != want[idx++]) isWrong = true;
            }
        }
        
        g:;
        if (isWrong) cout << "WRONG_INPUT" << '\n';
        else cout << score << '\n';
    }
}