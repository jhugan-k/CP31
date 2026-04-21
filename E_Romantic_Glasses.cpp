#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;

        vector<long long> pref(n+1, 0);
        unordered_set<long long> st;

        st.insert(0); // base case

        bool found = false;

        for(int i = 1; i <= n; i++){
            long long x; cin >> x;

            if(i % 2 == 1) pref[i] = pref[i-1] + x;
            else pref[i] = pref[i-1] - x;

            if(st.count(pref[i])){
                found = true;
            }

            st.insert(pref[i]);
        }

        cout << (found ? "YES\n" : "NO\n");
    }
}