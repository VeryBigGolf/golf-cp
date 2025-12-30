#include <bits/stdc++.h>
using namespace std;
#define int long double
int32_t main () {
    int w, h; cin >> w >> h;
    int Mosteller = sqrt(w * h) / 60;
    int Haycock = 0.024265 * pow(w, 0.5378) * pow(h, 0.3964);
    int Boyd = 0.0333 * pow(w,(0.6157 - 0.0188 * log10(w))) * pow(h,0.3);

    cout << setprecision(15) << Mosteller << '\n';
    cout << setprecision(15) << Haycock << '\n';
    cout << setprecision(15) << Boyd << '\n';
}