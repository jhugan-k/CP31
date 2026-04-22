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
        int s = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            s = s ^ x;
        }
        if(n % 2 == 0) {
            //even number of element. x will cancel out
            if(s == 0) {
                cout << 0 << endl;
                continue;
            }
            else {
                cout << -1 << endl;
                continue;
            }
            
        }
        else{
            //odd number of element. s is x
            cout << s << endl;
        }
    }
    
}
