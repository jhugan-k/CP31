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
        long long n; cin >> n;
        long long nk; cin >> nk;
        vector<long long>arr(n);
        vector<long long>arrk(nk);
        for(int i = 0; i < n; i++) cin >> arr[i];
        for(int i = 0; i < nk; i++) cin >> arrk[i];
        vector<long long>prefix;
        vector<long long>prefixMax;
        prefix.push_back(arr[0]);
        prefixMax.push_back(arr[0]);
        long long sum = arr[0];
        for(int i = 1; i < n; i++){
            sum += arr[i];
            prefix.push_back(sum);
            prefixMax.push_back(max(arr[i], prefixMax[i-1]));
        }
        //binary search in prefixMax: where a[i] <= k for each k
        for(int i = 0; i < nk; i++){
            int k = arrk[i];
            int low = 0;
            int high = prefixMax.size() - 1;
            int ans = -1;
            while(low <= high){
                int mid = low + (high - low) / 2;
                if(prefixMax[mid] <= k){
                    //store and continue to find index
                    ans = mid;
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            if(ans == -1){
                //no element <= k. that means no steps can be made
                if(i == nk - 1){
                    cout << 0 << endl;
                }
                else{
                    cout << 0 << " ";
                }
            }
            else{
                //ans found, return prefix sum up till that index
                if(i == nk - 1){
                    cout << prefix[ans] << endl;
                }
                else{
                    cout << prefix[ans] << " ";
                }
            }

        }

        
    }

}
    

