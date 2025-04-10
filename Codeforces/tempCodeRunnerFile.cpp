#include <bits/stdc++.h>
using namespace std;
bool is_prime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    long long sqrt_n = sqrt(n)+ 1;
    for (long long i = 3; i <= sqrt_n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        int k;
        cin >> x >> k;
        if (k == 1) {
            cout << (is_prime(x) ? "YES" : "NO") << endl;
        } else {
            if (x == 1) {
                cout << (k == 2 ? "YES" : "NO") << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}