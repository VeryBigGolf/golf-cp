#include <bits/stdc++.h>
using namespace std;
#define int long long

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int32_t main() {
    string a, b, c; 
    cin >> a >> b >> c;

    string all_digits_str = a + b + c;
    string non_repeat_str = a + b;
    
    int all_val = stoll(all_digits_str);
    int non_repeat_val = stoll(non_repeat_str);
    
    int up = all_val - non_repeat_val;

    string den_str = "";
    for (int i = 0; i < c.length(); i++) den_str += '9';
    for (int i = 0; i < b.length(); i++) den_str += '0';

    int bottom = stoll(den_str);
    int g = gcd(up, bottom);
    cout << up / g << " / " << bottom / g << '\n';
}