/*
    > use early breaks

*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc;
    cin >> tc;
    while(tc--){
        long long n; cin >> n;
        long long carbArea; cin >> carbArea;
        vector<long long> paintings(n);
        for(int i = 0; i < n; i++){
            cin >> paintings[i];
        }
        long long low = 1;
        long long high = 1e9;
        long long ans = 1;
        while(low <= high){
            long long mid = low + (high - low) / 2;
            long long w = mid;
            //check sum
            long long currArea = 0;
            for(auto it : paintings) {
                currArea += 1LL * ( 1LL * (it + (2 * w)) * 1LL * (it + (2 * w)));
                if(currArea > carbArea) break;
            }
            if(currArea > carbArea){
                //look for smaller w 
                high = mid - 1;
            }
            else if(currArea < carbArea){
                //look for bigger w
                low = mid + 1;
            }
            else{
                //found answer 
                ans = mid;
                break;
            }
        }
        cout << ans << endl;
    }
    
}
