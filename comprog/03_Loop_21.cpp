#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    while(getline(cin, s)) {
        bool strong = false;
        bool weak = false;
        if (s.size() >= 12) {
            bool capital = false;
            bool small = false;
            bool number = false;
            bool other = false;

            for (int i = 0; i < s.size(); i++) {
                if ('A' <= s[i] && s[i] <= 'Z') capital = true; 
                if ('a' <= s[i] && s[i] <= 'z') small = true;
                if ('0' <= s[i] && s[i] <= '9') number = true;
                if (!('A' <= s[i] && s[i] <= 'Z') 
                && !('a' <= s[i] && s[i] <= 'z')
                && !('0' <= s[i] && s[i] <= '9'))
                other = true;
            }

            if (capital && small && number && other) {
                strong = true;
            }
        }

        if (s.size() >= 8) {
            bool capital = false;
            bool small = false;
            bool number = false;

            for (int i = 0; i < s.size(); i++) {
                if ('A' <= s[i] && s[i] <= 'Z') capital = true; 
                if ('a' <= s[i] && s[i] <= 'z') small = true;
                if ('0' <= s[i] && s[i] <= '9') number = true;
            }

            if (capital && small && number) {
                weak = true;
            }
        }

        if (strong) cout << ">> strong" << '\n';
        else if (weak) cout << ">> weak" << '\n';
        else cout << ">> invalid" << '\n';
    }
}