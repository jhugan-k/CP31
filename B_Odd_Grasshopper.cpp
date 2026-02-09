#include <iostream>

using namespace std;

/**
 * Problem 1607B: Odd Grasshopper
 * Pattern observation for displacement (D):
 * n % 4 == 0: D = 0
 * n % 4 == 1: D = -n
 * n % 4 == 2: D = 1
 * n % 4 == 3: D = n + 1
 */

void solve() {
    long long x0, n;
    cin >> x0 >> n;

    long long displacement = 0;
    long long rem = n % 4;

    if (rem == 1) {
        displacement = -n;
    } else if (rem == 2) {
        displacement = 1;
    } else if (rem == 3) {
        displacement = n + 1;
    } else {
        displacement = 0;
    }

    // If starting position is even
    if (x0 % 2 == 0) {
        cout << x0 + displacement << endl;
    } 
    // If starting position is odd
    else {
        cout << x0 - displacement << endl;
    }
}

int main() {
    // Speed up I/O for large test cases
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}