#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc;
    cin >> tc;
    while(tc--){
        long long k, x;
        cin >> k >> x;

        long long low = 1; 
        long long high = 2 * k - 1;
        long long ans = 2 * k - 1; // Default: the ban happens at the very last line (or not at all)

        while(low <= high) {
            long long mid = low + (high - low) / 2;
            
            long long emojiCount = 0;
            if(mid <= k) {
                emojiCount = mid * (mid + 1) / 2;
            } else {
                long long h = (2 * k - 1) - mid;
                // Total k*k minus the rows we didn't reach
                emojiCount = k * k - (h * (h + 1) / 2);
            }

            if(emojiCount >= x) {
                ans = mid;      // Ban happens at or before this line
                high = mid - 1; // Try to find an earlier line
            } else {
                low = mid + 1;  // Not banned yet, look at later lines
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}