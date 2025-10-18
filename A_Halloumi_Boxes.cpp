#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string solve(int n, int k, vector<int>& a) {
        // if k == 1 → can only sort if array already sorted
        if (k == 1) {
            if (is_sorted(a.begin(), a.end()))
                return "YES";
            else
                return "NO";
        }
        // if k >= 2 → always possible
        return "YES";
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    Solution sol;
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        cout << sol.solve(n, k, a) << '\n';
    }
    return 0;
}

