/*
    > binary search on answer

*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc;
    cin >> tc;
    while(tc--){
        int n; cin >> n;
        int limit; cin >> limit;
        vector<int>arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        int low = 1;
        int high = *max_element(arr.begin(), arr.end()) + limit;
        int ans = -1;
        while(low <= high){
            int h = low + (high - low) / 2;
            //check this mid for its water capacity 
            long long cap = 0;
            for(auto c : arr){
                if((h - c) > 0) cap += (h - c);
                if(cap > limit) break;
            }
            if(cap <= limit){
                ans = h;
                low = h + 1;
            }
            else high = h - 1;
        }
        cout << ans << '\n';
    }
    
}
