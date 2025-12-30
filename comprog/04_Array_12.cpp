#include <bits/stdc++.h>
using namespace std;
int main () {
    string name [10] = {"Robert", "William", "James", "John", "Margaret", "Edward", "Sarah", "Andrew", "Anthony", "Deborah"};
    string nickname [10] = {"Dick", "Bill", "Jim", "Jack", "Peggy", "Ed", "Sally", "Andy", "Tony", "Debbie"};

    int n; cin >> n;
    while (n--)
    {
        string s; cin >> s;
        bool notfound = true;
        for (int i = 0; i < 10; i++) {
            if (s == name[i]) {cout << nickname[i] << '\n'; notfound = false; break;}
            if (s == nickname[i]) {cout << name[i] << '\n'; notfound = false; break;}
        }

        if (notfound) cout << "Not found" << '\n';
    }
    
}