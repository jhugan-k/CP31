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
        vector<long long> arr(n);
        vector<long long> v;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++){ 
            if(arr[i] < i + 1) v.push_back(i);
        }
        //try to find i for each j
        long long ans = 0;
        
        for(int j = 0; j < v.size(); j++){
            int idx = v[j];
            int num = arr[idx];
            //find how many indexes < num in v. (BS) ==> try to find (num - 1) 
            int low = 0;
            int high = v.size() - 1;
            int point = -1;
            while(low <= high){
                int mid = low + (high - low) / 2;
                if(v[mid] + 1 < num){
                    //possible ans. store and try to find larger index occourence 
                    point = mid;
                    low = mid + 1;
                }
                else{
                    //mid >= num.  move behind 
                    high = mid - 1;
                }
            }

            if(point != -1){
                //found an index in v which is lower bound. add number of pairs = v+1
                ans += (point + 1); // all indexes <= point form pair 
            }
        }
        cout << ans << endl;
        
    }
    
}
