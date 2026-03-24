/*
    > calculate maxXP at each point of i: prefix sum + (remaining k * maxRepeat)

*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc;
    cin >> tc;
    while(tc--){
        int n, k;
        cin >> n >> k;
        vector<int> prefix(n);
        cin >> prefix[0];
        for(int i = 1; i < n; i++){
            cin >> prefix[i];
            prefix[i] += prefix[i-1];
        }
        vector<int> b(n);
        for(int i = 0; i < n; i++) cin >> b[i];
        long long maxRepeat = 0;
        long long totalMax = prefix[0];
        for(int i = 0; i < n; i++){
            if(k > 0) k--;
            else break;
            maxRepeat = max(maxRepeat,  1LL * b[i]);
            long long currMax = prefix[i] + 1LL * k * maxRepeat;
            totalMax = max(totalMax, currMax);
        }   
        cout << totalMax << '\n';
    }
    
}
