#include <bits/stdc++.h> 
#include <iostream>
#include <string>

using namespace std;

int main() {
    int prod;
    string str;
    string rstr;
    int ans = 0;
    for (int x = 0; x < 1000; x++) {
        for (int y = 0; y < 1000; y++) {
            prod = x * y;
            str = to_string(prod);
            rstr = str;
            reverse(rstr.begin(), rstr.end());
            if (str == rstr && prod > ans) {
                ans = prod;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
