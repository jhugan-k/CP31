/*


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
        vector<int>arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        vector<int> b(n);
        for(int i = 0; i < n; i++){
            b[i] = arr[i] - i;
        }
        unordered_map<int,int>mpp;
        for(auto it : b) mpp[it]++;
        long long ans = 0;
        for(auto it : mpp){
            ans += (1LL * it.second * (it.second-1)) / 2;
        }
        cout << ans << endl;
    }
    
}
