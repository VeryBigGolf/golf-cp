#include <iostream>
#include <map>

using namespace std;

int F(int m) {      // Fibonacci Number 
    if (m==0 || m==1) return m;
    if (m%2==1) {
        int n = m/2+1;
        int f0 = F(n), f1 = F(n-1);
        return f0*f0 + f1*f1;
    } else {
        int n = m/2;
        int f0 = F(n), f1 = F(n-1);
        return (2*f1+f0)*f0;
    }
}
int M(int n) {
    if (n == 0 || n == 1) return 1;
    int s = M(n-1);
    for (int k=0; k<n-1; ++k)
        s += M(k)*M(n-2-k);
    return s;
}
int S(int n) {
    if (n==1 || n==2) return 1;
    return ((6*n-9)*S(n-1)-(n-3)*S(n-2))/n;
}
int D(int n) {
    if (n==0) return 1;
    int sign = 1;
    if (n%2==1) sign = -1;
    return n*D(n-1)+ sign;
}
int main() {
    map<string, int(*)(int)> func = {{"F",F}, {"M",M}, {"S",S}, {"D",D}};
    string fn;
    int p;
    while (cin >> fn >> p) {
        if (func.find(fn) != func.end())
            cout << fn << '(' << p << ") = " << func[fn](p) << endl;
    }
    return 0;
}

