#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        // Count frequency of each character
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        // Count how many characters have odd frequency
        int odd = 0;
        for (int f : freq) {
            if (f % 2 == 1) odd++;
        }

        // Maximum odd characters allowed in palindrome
        int allowed_odd = (n - k) % 2;

        // Check condition
        if (odd <= k + allowed_odd) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
