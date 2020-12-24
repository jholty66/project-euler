#include <iostream>
using namespace std;

int nextPrime(int x) {
    x += 2;
    for (int y = 2; y < x; y++) {
        if (x % y == 0) {
            return nextPrime(x);
        }
    }
    return x;
}

int primeFactor(long int n, long int f) {
    cout << f << endl;
    cout << n << f << endl;
    if (n == f) {
        return f;
    } else if (n % f == 0) {
        return primeFactor(n/f, f);
    } else {
        return primeFactor(n, nextPrime(f));
    }
}

int main() {
    cout << primeFactor(600851475143,3) << endl; 
    return 0;
}
