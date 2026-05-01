#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    if (k >= n) {
        cout << 1 << endl;
        return;
    }

    long long max_divisor = 1;

    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            // i is a divisor. Check if it's a valid package size.
            if (i <= k) {
                max_divisor = max(max_divisor, i);
            }
            // n/i is the paired divisor. Check it too.
            if (n / i <= k) {
                max_divisor = max(max_divisor, n / i);
            }
        }
    }

    cout << n / max_divisor << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}