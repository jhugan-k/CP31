#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 
 * 1. Identify blocks of identical shoe sizes (since the input is sorted).
 * 2. If any block has only 1 person, output -1 (they can't swap).
 * 3. For each block of indices [L, R], shift them cyclically:
 *    The person at L gets shoe R, and everyone else gets shoe i-1.
 
 */

void solve() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    vector<int> p(n);
    bool possible = true;

    for (int i = 0; i < n; ) {
        int j = i;
        // Find the end of the block with the same shoe size
        while (j < n && s[j] == s[i]) {
            j++;
        }

        int blockSize = j - i;

        // If a shoe size is unique, no shuffle is possible
        if (blockSize == 1) {
            possible = false;
            break;
        }

        
        p[i] = j; // The first person in block gets the last person's shoe
        for (int k = i + 1; k < j; k++) {
            p[k] = k; // Everyone else gets the shoe of the person before them
        }

        i = j; // Move to the next block
    }

    if (!possible) {
        cout << -1 << "\n";
    } else {
        for (int i = 0; i < n; i++) {
            cout << p[i] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}