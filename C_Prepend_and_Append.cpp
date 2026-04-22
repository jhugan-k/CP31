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
        string s; cin >> s;

        int l = 0;
        int r = n-1;

        while(l < r){
            if((s[l] == '0' && s[r] == '1') || (s[l] == '1' & s[r] == '0')){
                //move 2P
                l++;
                r--;
            }
            else break;
        }
        cout << r - l + 1 << endl;
    }
    
}
