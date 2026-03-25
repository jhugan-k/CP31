#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--){
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        // prefix sum
        vector<long long> pref(n+1, 0);
        for(int i = 0; i < n; i++){
            pref[i+1] = pref[i] + a[i];
        }

        long long ans = 0;

        for(int x = 0; x <= k; x++){
            int remove_small = 2 * x;
            int remove_large = k - x;

            if(remove_small + remove_large > n) continue;

            long long sum_small = pref[remove_small];
            long long sum_large = pref[n] - pref[n - remove_large];

            long long curr = pref[n] - sum_small - sum_large;
            ans = max(ans, curr);
        }

        cout << ans << '\n';
    }
}