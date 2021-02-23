#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int main() {
    int sum = 0;
    int i = 0;
    int j;
    while (true) {
        j = fib(i);
        if (j>4000000) {
            cout << sum << endl;
            return 0;
        } else if (j % 2 == 0){
            sum += j;
        }
        i++;
    }
}
