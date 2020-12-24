#include <bits/stdc++.h> 

using namespace std;

int np(int x) {
    if (x % 2 == 0) {
        x -= 1;
    }
    x += 2;
    for (int y = 2; y < x; y++) {
        if (x % y == 0) {
            return np(x);
        }
    }
    return x;
}

int main() {
    int ans = 2;
    for (int i = 0; i < 10000; i++) {
        ans = np(ans);
    }
    cout << ans<< endl;
    return 0;
}
