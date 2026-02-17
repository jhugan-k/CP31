#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> arr1(n), arr2(n);
        for (int i = 0; i < n; i++) cin >> arr1[i];
        for (int i = 0; i < n; i++) cin >> arr2[i];

        // Use vectors instead of maps for O(1) access
        // Values can be up to 2*n
        vector<int> max_a(2 * n + 1, 0);
        vector<int> max_b(2 * n + 1, 0);

        // Process Array 1
        int count = 0;
        for (int i = 0; i < n; i++) {
            count++;
            if (i == n - 1 || arr1[i] != arr1[i + 1]) {
                // Keep only the LONGEST consecutive run for this number in A
                max_a[arr1[i]] = max(max_a[arr1[i]], count);
                count = 0;
            }
        }

        // Process Array 2
        count = 0; // Reset count for the second array
        for (int i = 0; i < n; i++) {
            count++;
            if (i == n - 1 || arr2[i] != arr2[i + 1]) {
                // Keep only the LONGEST consecutive run for this number in B
                max_b[arr2[i]] = max(max_b[arr2[i]], count);
                count = 0;
            }
        }

        int ans = 0;
        // The answer for any number x is the sum of its best runs in A and B
        for (int i = 0; i <= 2 * n; i++) {
            ans = max(ans, max_a[i] + max_b[i]);
        }
        
        cout << ans << "\n";
    }
    return 0;
}