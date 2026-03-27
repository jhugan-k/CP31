#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--){
        int n, k;
        cin >> n >> k;

        vector<vector<int>> a(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }

        int cnt = 0;

        // count mismatched pairs (only once)
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int ni = n - 1 - i;
                int nj = n - 1 - j;

                // process each pair only once
                if(i > ni || (i == ni && j > nj)) continue;

                if(a[i][j] != a[ni][nj]){
                    cnt++;
                }
            }
        }

        if(cnt > k){
            cout << "NO\n";
        }
        else{
            // remaining operations
            int rem = k - cnt;

            if(rem % 2 == 0 || n % 2 == 1){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}