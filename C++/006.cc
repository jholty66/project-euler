#include <bits/stdc++.h> 

using namespace std;

int main() {
    int sum = 0;
    int sqr = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i * i;
        cout << sum << endl;
        sqr += i;
    }
    sqr = sqr * sqr;
    cout << sqr << " "<< sum << endl;
    cout << sqr - sum << endl;
    return 0;
}
