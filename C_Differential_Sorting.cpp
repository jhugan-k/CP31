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
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
       
        if(is_sorted(arr.begin(), arr.end())){
            cout << 0 << endl;
            continue;
        }
        //possible if last element is positive and greater than previous 
        if(arr[n-1] >= 0 && arr[n-1] >= arr[n-2]){
            //possible. enter number of operations
            
            int ops = n - 2;
            cout << ops << endl;    
            for(int i = 1; i<= ops; i++){
                cout << i << " " << n-1 << " " << n << endl;
            }
        }
        else{
            //not possible
            cout << -1 << endl;
        }
    }
    
}
