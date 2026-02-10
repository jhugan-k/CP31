#include<bits/stdc++.h>
using namespace std;

// Helper function to find min deletions for a specific ending pattern
int solve_pattern(string s, string target) {
    int deletions = 0;
    int n = s.size();
    int j = 1; // We look for target[1] first (the right-most digit)

    int pos_right = -1;
    // Step 1: Find the right-most digit of the target (e.g., '5' in "25")
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == target[1]) {
            pos_right = i;
            break;
        }
        deletions++; // Delete everything to the right of the first found digit
    }

    // Step 2: Find the left digit of the target (e.g., '2' in "25") to the left of pos_right
    for (int i = pos_right - 1; i >= 0; i--) {
        if (s[i] == target[0]) {
            return deletions; // Found it! Return total skipped digits
        }
        deletions++; // Delete digits between the two target digits
    }

    return 100; // If pattern not found, return a large number
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;

        int ans = s.size(); // Start with worst case (delete all)
        
        // Check all 4 patterns
        ans = min(ans, solve_pattern(s, "00"));
        ans = min(ans, solve_pattern(s, "25"));
        ans = min(ans, solve_pattern(s, "50"));
        ans = min(ans, solve_pattern(s, "75"));

        cout << ans << endl;
    }
    return 0;
}