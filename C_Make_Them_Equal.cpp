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
        char c; cin >> c;
        string s; cin >> s;

        int ans = 0;

        bool alreadyDone = true;
        for(auto it : s){
            if(it != c){
                alreadyDone = false;
                break;
            }
        }
        if(alreadyDone){
            cout << ans << endl;
            continue;
        }
        for(int x = 1; x <= n; x++){
            bool ok = true;
            for(int i = x; i <= n; i += x){
                if(s[i-1] != c){
                    ok = false;
                    break;
                }
            }
            if(ok){
                ans = x;
                break;
            }
            
        }
        if(ans != 0) {
            //found an index 
            cout << 1 << endl;
            cout << ans << endl;
        }
        else{
            // not found an index
            cout << 2 << endl;
            cout << n << " " << n-1 << endl;
        }
    }
    
}
