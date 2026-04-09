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

        int sum = 0;
        unordered_map<int,int> mpp;
        mpp[0] = -1;

        int maxLen = -1;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;   

            sum += x;

            // check first
            if(mpp.find(sum - k) != mpp.end()){
                int len = i - mpp[sum - k];
                maxLen = max(maxLen, len);
            }

            // store first occurrence
            if(mpp.find(sum) == mpp.end()){
                mpp[sum] = i;
            }
        }

        if(maxLen == -1) cout << -1 << '\n';
        else cout << n - maxLen << '\n';
    }
}