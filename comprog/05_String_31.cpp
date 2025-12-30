#include <bits/stdc++.h>
using namespace std;
int main () {
  string s;
  getline(cin, s);
  int m = s.size();
  vector<string> mapping = {"UUUU", "UUUL", "UULU", "UULL", "ULUU", "ULUL", "ULLU", "ULLL", "LUUU", "LUUL", "LULU", "LULL"};
  vector<string> val = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "-", ","};
  string tmp;
  while (getline(cin, tmp)) {
    char command = tmp[0];
    string t = tmp.substr(2);
    if (command == 'D') {
      string g = "";
      for (char c: t) {
        if (isalpha(c)) {
          if (isupper(c)) g += "U";
          else g += "L";
        }
      }
      for (int i = 0; i < g.size(); i+=4) {
        string m = g.substr(i, 4);
        int k = 0; while (mapping[k] != m) k++;
        cout << val[k];
      }
    } else if (command == 'E') {
      string r;
      int d = 0;
      for (char c: t) {
        int k = 0; while(val[k] != string(1, c)) k++;
        r = mapping[k];
        for (char f: r) {
          while (!isalpha(s[d])) {
            cout << s[d];
            d = (d + 1) % m;
          }
          char j;
          if (f == 'U') j = toupper(s[d]);
          else j = tolower(s[d]);
          cout << j;
          d = (d + 1) % m;
        }
      }
    }
    cout << '\n';
  }
}
