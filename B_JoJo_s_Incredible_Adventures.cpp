#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        string s; cin >> s;

        string t = s + s;

        int maxLen = 0, curr = 0;

        for(char c : t){
            if(c == '1'){
                curr++;
                maxLen = max(maxLen, curr);
            } else {
                curr = 0;
            }
        }

        int k = min(maxLen, n);

        if(k == 0){
            cout << 0 << "\n";
        }
        else if(k == n){
            cout << 1LL * n * n << "\n";
        }
        else{
            long long ans = 1LL * ((k + 1) / 2) * ((k + 2) / 2);
            cout << ans << "\n";
        }
    }
}