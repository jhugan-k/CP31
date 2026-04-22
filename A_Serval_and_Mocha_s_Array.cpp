#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        bool ok = false;

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(gcd(arr[i], arr[j]) <= 2){
                    ok = true;
                    break;
                }
            }
            if(ok) break;
        }

        cout << (ok ? "Yes\n" : "No\n");
    }
}