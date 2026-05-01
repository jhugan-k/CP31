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
        int x; cin >> x;
        int m; cin >> m;
        // initial 2P range. read each operation 
        long long l = x;
        long long r = x;
        while(m--){
            long long leftBound; cin >> leftBound;
            long long rightBound; cin >> rightBound;
            //range overlap: if leftBound is <= left or rightBound >= right
            if(max(l, leftBound) <= min(r, rightBound)){
                //range overlap. fix range
                l = min(l, leftBound);
                r = max(r,rightBound);
                
            }
        }
        //output final range 
        long long ans = r - l + 1;
        cout << ans << endl;

    }

}
