#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void solve(){

    }
};

int main(){
    Solution sol;
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int n;
        cin >> n;
        vector<int> arr;
        int minDiff = 1e9;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            arr.push_back(x);
            if(j >= 1){
                minDiff = min(minDiff, arr[j] - arr[j-1]);
            }
        }
        //check if arr is not sorted
        if(!is_sorted(arr.begin(), arr.end())){
            cout << 0 << endl;
            continue;
        }
        else{
            //not sorted. find minimum difference
            int ans = (minDiff / 2) + 1;
            cout << ans << endl;
        }

    
    }

    return 0;
}