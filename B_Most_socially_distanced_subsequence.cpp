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
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(i == 0 || i == n-1){
                ans.push_back(arr[i]); //always take both ends 
                continue;
            } 
            //check for peak
            if((arr[i] > arr[i+1] && arr[i] > arr[i-1]) || (arr[i] < arr[i+1] && arr[i] < arr[i-1])){
                //either peak or valley. take it 
                ans.push_back(arr[i]);
            }
        }
        cout << ans.size() << endl;
        for(int i = 0; i < ans.size(); i++){
            if(i == ans.size() - 1){
                cout << ans[i] << endl;
                break;
            }
            cout << ans[i] << " ";
        }

        
    }
    
}
