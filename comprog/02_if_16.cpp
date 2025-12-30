#include <bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    if (n == 0) {
        cout << "zero";
    }
    if (n > 0) {
        cout << "positive";
    }
    if (n < 0) {
        cout << "negative";
    }
    cout << '\n';
    if (n % 2 == 0) {
        cout << "even";
    } else {
        cout << "odd";
    }
    cout << '\n';    
}