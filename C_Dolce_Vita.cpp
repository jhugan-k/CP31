#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> a(n);
        for(auto &i : a) cin >> i;

        sort(a.begin(), a.end());

        long long ans = 0;
        long long pref = 0;

        for(int k = 1; k <= n; k++){
            pref += a[k-1];

            if(pref > x) break;

            long long days = (x - pref) / k + 1;
            ans += days;
        }

        cout << ans << '\n';
    }
}