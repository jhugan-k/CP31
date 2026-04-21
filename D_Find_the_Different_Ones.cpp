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
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        vector<int> ldi(n);
        ldi[0] = -1;

        for(int i = 1; i < n; i++){
            if(arr[i] != arr[i-1]){
                //changed element. new ldi 
                ldi[i] = i-1;
            }
            else{
                //did not change element. keep previous ldi 
                ldi[i] = ldi[i-1];
            }
        }

        //process query
        int q; cin >> q;
        while(q--){
            int l; cin >> l;
            int r; cin >> r;
            l--;
            r--; //obtain natural indexes
            if(ldi[r] < l){
                //both same. not possible
                cout << -1 << " " << -1 << endl;
            }
            else{
                //different element. r and ldi[r]
                cout << ldi[r] + 1 << " " << r + 1 << endl;
            }

        }

    }
    
}
