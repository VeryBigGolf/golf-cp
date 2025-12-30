#include <bits/stdc++.h>
using namespace std;
int main () {
    string id1, comprog1, calI1, calII1;
    string id2, comprog2, calI2, calII2;
    double gpax1, gpax2;

    cin >> id1 >> gpax1 >> comprog1 >> calI1 >> calII1; 
    cin >> id2 >> gpax2 >> comprog2 >> calI2 >> calII2;
    
    bool pass1 = (comprog1 == "A" && calI1 <= "C" && calII1 <= "C");
    bool pass2 = (comprog2 == "A" && calI2 <= "C" && calII2 <= "C");

    if (!pass1 && !pass2) {
        cout << "None";
        return 0;
    }

    if (pass1 && !pass2) {
        cout << id1;
        return 0;
    }
    if (!pass1 && pass2) {
        cout << id2;
        return 0;
    }
    
    if (pass1 && pass2) {
        if (gpax1 > gpax2) {
            cout << id1;
            return 0;
        }
        if (gpax1 < gpax2) {
            cout << id2;
            return 0;
        }
        if (gpax1 == gpax2) {
            if (calI1 < calI2) {
                cout << id1;
                return 0;
            }
            if (calI1 > calI2) {
                cout << id2;
                return 0;
            }
            if (calI1 == calI2) {
                if (calII1 < calII2) {
                    cout << id1;
                    return 0;
                }
                if (calII1 > calII2) {
                    cout << id2;
                    return 0;
                }
                if (calII1 == calII2) {
                    cout << "Both";
                    return 0;
                }
            }
        }
    }
}