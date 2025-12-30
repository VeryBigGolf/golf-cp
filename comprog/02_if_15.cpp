#include <bits/stdc++.h>
using namespace std;
int main () {
    string s; cin >> s;
    if (s.length() == 10 && (s.substr(0, 2) == "06" || s.substr(0, 2) == "08" || s.substr(0, 2) == "09")) {
        cout << "Mobile number";
    } else {
        cout << "Not a mobile number";
    }
}