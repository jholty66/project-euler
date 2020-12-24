#include <bits/stdc++.h> 
#include <math.h>

using namespace std;

int main() {
    int n = 2000000;
    int sum = 0;
    int arr[n] = {0};
    for (int i = 2; i < n; i++) {
        for (int j = i * i; j < n; j+=i) {
            arr[j - 1] = 1;
        }
    }
    for (int i = 2; i < n; i++) {
        if (arr[i - 1] == 0) {
            cout << i << endl;
            sum += i;
        }
    }
    cout << sum << endl;
}
