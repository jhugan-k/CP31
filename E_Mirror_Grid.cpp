/*
    > take matrix input as string if tle 
    > - '0' convert char to digit
    > matrix rotation indexes: i, n-1-j, n-1-i, i

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
        vector<string>arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int ans = 0;
        for(int i = 0; i < n/2; i++){
            for(int j = 0; j < (n+1) / 2; j++){
                int a = arr[i][j] - '0';
                int b = arr[j][n-1-i] - '0';
                int c = arr[n-1-i][n-1-j] - '0';
                int d = arr[n-1-j][i] - '0';

                int ones = a + b + c + d;

                ans += min(ones, 4 - ones);
            }
        }
        cout << ans << endl;
    }
    
}
