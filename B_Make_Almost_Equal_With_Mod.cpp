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
        for(int i = 0; i < n; i++) cin >> arr[i];
        for(long long k = 1; ; k*= 2){
            set<int>st;
            for(auto it : arr) st.insert(it % k);
            if(st.size() == 2){
                cout << k << endl;
                break;
            }

        }

    }
    
}
