#include <bits/stdc++.h> 

using namespace std;

bool square(int n) {
    int i = 1;
    while (true) {
        if (i * i < n) {
            i++;
        } else if (i * i == n) {
            return true;
        } else {
            return false;
        }
    }
}

int main() {
    for (int i = 1; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            int k = i*i + j*j;
            if (square(k)) {
                float l = sqrt(k);
                if (i+j+l == 1000) {
                    cout.setf(ios::fixed);
                    cout << setprecision(0) << i*j*l << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No answer." << endl;
}
