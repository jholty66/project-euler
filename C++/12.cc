#include <bits/stdc++.h>

using namespace std;

int countFactors(int n) {
    int c=1;
    for (int i = 2; i<=n; i++) {
        if (n%i == 0) {
            c++;
        }
    }
    return c;
}

int main() {
    int i=2;
    int t=3;
    int c;
    while (true) {
        if (countFactors(t) > 500) {
            cout << t << "\n";
            return 0;
        } else {
            // cout << t << "\n";
            i++;
            t+=i;
        }
    }
}


