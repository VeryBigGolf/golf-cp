#include <bits/stdc++.h>
using namespace std;
int main () {
    string t; int k;
    cin >> t >> k;
    string tmp = "";
    for (int i = 0; i < t.size(); i++) {
        if (tmp.size() == 0) tmp += t[i];
        else {
            if (t[i] == tmp[0]) tmp += t[i];
            else {
                if (tmp.size() < k)
                cout << tmp;
                tmp = t[i];
            }
        }
    }   
    if (tmp.size() < k)
    cout << tmp;
}