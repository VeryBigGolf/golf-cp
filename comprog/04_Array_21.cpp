#include <bits/stdc++.h>
using namespace std;
double A[1000], C[1000];
int main () {
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) {
        double tmp = A[i];
        for (int j = i; j > 0; j--) {
            tmp = A[j - 1] + 1 / tmp;
        }
        C[i] = tmp;
    }

    for (int i = 0; i < n; i++) cout <<  setprecision(10) << C[i] << '\n';
}