/*
    > sum until a[i] must be >= a[i]
    > after sorting
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
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());

        if(arr[0] != 1){
            cout << "NO" << '\n';
            continue;
        }

        long long currSum = 1;
        bool valid = 1;
        for(int i = 1; i < n; i++){
            if(currSum >= arr[i]){
                currSum += arr[i];
                continue;
            }

            else{
                valid = 0;
                break;
            }
        }
        if(valid) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
}
