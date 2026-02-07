#include<bits/stdc++.h>
using namespace std;

int main() {
    // 1. Fast I/O
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        // 2. Use Sort instead of unordered_map
        sort(a.begin(), a.end());

        int maxFreq = 1;
        int currentFreq = 1;
        for(int i = 1; i < n; i++) {
            if(a[i] == a[i-1]) {
                currentFreq++;
            } else {
                currentFreq = 1;
            }
            maxFreq = max(maxFreq, currentFreq);
        }

        if(maxFreq == n) {
            cout << 0 << endl;
            continue;
        }

        
        int clones = 0;
        long long amount = maxFreq; // Use long long to avoid overflow
        while(amount < n) {
            clones++;
            amount *= 2;
        }

        int swaps = n - maxFreq;
        cout << clones + swaps << endl;
    }
}