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
        string a; cin >> a;
        string b; cin >> b;

        bool possible = 1;
        bool flipped = 0;
        int preSum = 0;
        vector<int> balance(n);
        int curr = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == '1') curr++;
            else curr--;
            balance[i] = curr;
        }

        for(int i = n-1; i >= 0; i--){
            int bit = a[i] - '0';
            bit = bit ^ flipped;
            if(bit != (b[i] - '0')){
                //bit needs to be changed by operation. check if we can do operation
                if(balance[i] == 0){
                    //can do operation. swap the entire prefix
                    flipped = !flipped;
                }
                else{
                    //cannot do operation
                    possible = 0;
                    break;
                }
            }
        }

        if(possible) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    
}
