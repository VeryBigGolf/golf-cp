#include <bits/stdc++.h>
using namespace std;
string golf[1009];
string keep1[1009];
string keep2[1009];
int main () {
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> golf[i];
    string s;
    while (cin >> s) {
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == 'C') {
                for (int k = 0; k < n / 2; k++) {
                    swap(golf[k], golf[k + n / 2]);
                }
            }
            if (s[j] == 'S') {
                for (int a = 0; a < n / 2; a++) {
                    keep1[a] = golf[a];
                }
                for (int a = n / 2; a < n; a++) {
                    keep2[a - n / 2] = golf[a];
                }
                for (int a = 0; a < n; a+=2) {
                    golf[a] = keep1[a / 2];
                    golf[a + 1] = keep2[a / 2];
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << golf[i] << ' ';
    }
}