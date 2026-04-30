/*
    > greedily setting bits starting from 2^30 will give max and
    > netK for that bit = n - (number of times that bit already appeared) to set all others
    > check each bit starting from 2^30 if netK <= k. if yes, then use it and AND the 2^bit with initialAND
    > if netK is > k, move to next bit 

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
        long long k; cin >> k;
        
        vector<int>bitCount(31,0);
        
        for(int i = 0; i < n; i++){
            int val; cin >> val;

            //check each bit in val
            for(int i = 0; i<=30; i++){
                if((val >> i) & 1){
                    bitCount[i]++;
                }
            }
        }

        long long ans = 0;

        //reverse iterate bitCount
        for(int i = 30; i >=0; i--){
            int needed = n - bitCount[i];
            if(needed <= k){
                k -= needed;
                ans = ans | (1 << i); // turn on ith bit
            }
        }

        cout << ans << endl;
    }
    
}
