/*
    > iterate on array
    > binary search on each i

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
        //subsequence length 1: always pick, cost = 1
        cout << 1 << " ";
        //iteration from subsequence length 2
        for(int i = 1; i < n; i++){
            int low = 0;
            int ans = 0;
            int high = i;

            while(low < high){
                int mid = low + (high - low) / 2;
                int diff = (i - mid + 1);
                if(arr[mid] == diff){
                    //best pick option. this is max length. add diff to ans
                    ans = diff - 1;
                    break;
                }
                else if(arr[mid] > diff){
                    //can pick this. go to left and see if can pick more 
                    ans = diff - 1;
                    high = mid;
                }
                else{
                    //arr[mid] < diff. cannot pick. move right 
                    low = mid + 1;
                }
            }

            ans += 1; //always pick arr[i]
            if(i == n-1) cout << ans << endl;
            else cout << ans << " ";
        }
    }
    
}
