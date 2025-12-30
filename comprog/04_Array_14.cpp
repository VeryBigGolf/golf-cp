#include <bits/stdc++.h>
using namespace std;
int r, c; 
double matrix[1000][1000];
double ans[1000][1000];
int main () {
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 1; i < r - 1; i++) {
        for (int j = 1; j < c - 1; j++) {
            ans[i][j] = (matrix[i - 1][j - 1] + matrix[i - 1][j] + matrix[i - 1][j + 1] +
                        matrix[i][j - 1] + matrix[i][j] + matrix[i][j + 1] +
                        matrix[i + 1][j - 1] + matrix[i + 1][j] + matrix[i + 1][j + 1]) / 9; 
        }
    }

    for (int i = 1; i < r - 1; i++) {   
        for (int j = 1; j < c - 1; j++) {
            cout << round(ans[i][j] * 100.0) / 100.0 << ' ';
        }
        cout << '\n';
    }
}

