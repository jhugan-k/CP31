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
        vector<long long>spend(n);
        vector<long long>budget(n);
        vector<long long> net(n);
        for(int i = 0; i < n; i++) cin >> spend[i];
        for(int i = 0; i < n; i++){
            cin >> budget[i];
            net[i] = budget[i] - spend[i];
        }
        sort(net.begin(), net.end());
        int l = 0;
        int r = n-1;
        int paircount = 0;
        while(l < r){
            if(net[l] + net[r] >= 0){
                //can make pair, because net is 0 or more
                paircount++;
                l++;
                r--;
            }
            else{
                //cannot make pair, due to net[l] being too low. skip this net[l] as it cant pair with anyone
                l++;
            }
        }
        cout << paircount << endl;

        
        
    }
    
}
