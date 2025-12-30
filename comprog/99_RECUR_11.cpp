#include <iostream>
using namespace std;
string dec2hex(int d) {
  if (d < 16) {
    if (d < 10) return to_string(d);
    else if (d == 10) return "A";
    else if (d == 11) return "B";
    else if (d == 12) return "C";
    else if (d == 13) return "D";
    else if (d == 14) return "E";
    else if (d == 15) return "F";
  }
  return dec2hex(d / 16) + dec2hex(d % 16);
}

int main() {
  int d;
  while (cin >> d) {
    cout << d << " -> " << dec2hex(d) << endl;
  }
  return 0;
} 
