/*
    > option 1: fix first element and rotate others such that max appears on last slot
    > option 2: fix last element and rotate others such that min appears on first slot
    > option 3: rotate entire array. (for two consecutive max and min)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        int n;
        cin >> n;
        vector<int>arr;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr.push_back(x);
        }
        int ans = 0;
        //option 1: find difference between first element and max from remaining array
        for(int i = 1; i < n; i++){
            int diff = arr[i] - arr[0];
            ans = max(ans, diff);
        }
        //option 2: find difference between last element and min from remaining array 
        for(int i = 0; i < n - 1; i++){
            int diff = arr[n-1] - arr[i];
            ans = max(ans,diff);
        }
        //option 3: check if any 2 consecutive elements bigger than ans
        for(int i = 0; i < n - 1; i++){
            if(arr[i] - arr[i+1] > ans) ans = arr[i] - arr[i+1];
        }
        cout << ans << endl;
    }
}