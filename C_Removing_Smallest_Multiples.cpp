/*
    > iterate over k
    > keep removing smallest unmarked multiple of k. if nothing to remove, move to next k
    > iterate until S == T. or end of k
    > learning: try iterating over different things in the question, other than n

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
        vector<bool>used(n+1,0);
        long long ans = 0;    
        for(int k = 1; k <= n; k++){
            for(long long multiple = k; multiple <= n; multiple += k){
                if(s[multiple - 1] == '1') break; //cannot delete this multiple as it is required in t
                if(!used[multiple]){
                    ans += k;
                    used[multiple] = 1; //to prevent any other k from deleting this multiple
                }
            
            }
        }
        cout << ans << endl;
    }
    
}
