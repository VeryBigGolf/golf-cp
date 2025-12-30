#include <bits/stdc++.h>
using namespace std;
int main () {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    if (a.length() != b.length()) {
        cout << "Incomplete answer";
        return 0;
    }
    int cnt = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == b[i]) cnt++;
    }
    cout << cnt;
}