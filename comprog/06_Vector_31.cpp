#include <bits/stdc++.h>
using namespace std;

int check_row(vector<vector<bool>> v) {
  int win = -1;
  for (int i = 0; i < 5; i++) {
    int cnt = 0;
    for (int j = 0; j < 5; j++) {
      if (v[i][j]) cnt++;
    }
    if (cnt == 5) win = i;
  }
  return win;
}

int check_col(vector<vector<bool>> v) {
  for (int i = 0; i < 5; i++) {
    int cnt = 0;
    for (int j = 0; j < 5; j++) {
      if (v[j][i]) cnt++;
    }
    if (cnt == 5) return i;
  }
  return -1;
}


bool check_diag_neg(vector<vector<bool>> v) {
  int cnt = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (i == j && v[i][j]) cnt++;
    }
  }
  if (cnt == 5) return true;
  else return false;
}

bool check_diag_pos(vector<vector<bool>> v) {
  int cnt = 0;
  int a = 0, b = 4;
  for (int i = 0; i < 5; i++) {
    if (v[a++][b--]) cnt++;
  }
  if (cnt == 5) return true;
  else return false;
}

int main() {
  vector<vector<bool>> chk(5, vector<bool>(5, false)); chk[2][2] = true;
  vector<vector<string>> bingo(5, vector<string>(5));
  vector<string> ps = {"B", "I", "N", "G", "O"};
  string in;
  for (int i = 0; i < 5; i++) cin >> in;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> bingo[i][j];
      bingo[i][j] = ps[j] + bingo[i][j];
    }
  }

  bingo[2][2] = "*";
  int cnt = 0;
  while (cin >> in) {
    cnt++;
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        if (in == bingo[i][j]) {
          chk[i][j] = true;
          if (check_row(chk) != -1 ||check_row(chk) != -1 || check_diag_neg(chk) || check_diag_pos(chk)) {
            cout << cnt << '\n';
            if (check_row(chk) != -1) {
              for (int k = 0; k < 5; k++) {
                int tmp = check_row(chk);
                if (bingo[tmp][k] != "*") {
                  cout << bingo[tmp][k];
                  if (k != 4) cout << ", ";
                }
              }
              cout << '\n';
            }
            if (check_col(chk) != -1) {
                int tmp = check_col(chk);
              for (int k = 0; k < 5; k++) {
                if (bingo[k][tmp] != "*") {
                  cout << bingo[k][tmp];
                  if (k != 4) cout << ", ";
                }
              }
              cout << '\n';
            }
            if (check_diag_neg(chk)) {
              for (int k = 0; k < 5; k++) {
                if (k != 2) {
                  cout << bingo[k][k];
                  if (k != 4) cout << ", ";
                }
              }
              cout << '\n';
            }
            if (check_diag_pos(chk)) {
              cout << bingo[4][0] << ", " << bingo[3][1] << ", " << bingo[1][3] << ", " << bingo[0][4];
              cout << '\n';
            }
            exit(0);
          }
        }
      }
    }
  }
}

