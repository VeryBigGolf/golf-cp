#include <bits/stdc++.h>
using namespace std;
int main () {
    string s; cin >> s;
    vector<string> month = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    string ans = month[stoi(s.substr(3, 2)) - 1] + " " + to_string(stoi(s.substr(0, 2))) + ", " + to_string(stoi(s.substr(6, 4)) - 543); 
    cout << ans;
}