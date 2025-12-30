#include <bits/stdc++.h>
using namespace std;
int main () {
    int h; cin >> h;
    for (int i = 0; i < h; i++) {
        for (int k = 0; k < h; k++) {
            if (k == h - i - 1 || i == h - 1) cout << '*';
            else cout << '.';
        }
        for (int j = 0; j < i; j++) {
            if (j == i - 1 || i == h - 1) cout << '*';
            else cout << '.';
        }
        cout << endl;
    }
}