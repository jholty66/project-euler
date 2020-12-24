#include <bits/stdc++.h> 

using namespace std;

bool test(int n) {
    for (int i = 1; i <= 20; i++) {
        if (n % i != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n = 1;
    while (true) {
        if (test(n)) {
            cout << n << endl;
            return 0;
        }
        n++;
    }
}
