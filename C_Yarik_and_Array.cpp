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
        int n;
        cin >> n;
        
        
        vector<int>arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        int max_sum = arr[0];
        int curr_sum = arr[0];
        for(int i = 1; i < n; i++){
            if(abs(arr[i] % 2) == abs(arr[i-1] % 2)){
                //same parity
                curr_sum = arr[i];
            }
            else{
                //different parity
                curr_sum = max(curr_sum + arr[i], arr[i]);
            }
            max_sum = max(max_sum, curr_sum);
        }
        cout << max_sum << '\n';
    }
    
}
