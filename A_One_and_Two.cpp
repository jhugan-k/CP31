/*
    > prefix count number of 2s 

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
        vector<int> arr(n);
        vector<int>prefix2(n);

        cin >> arr[0];

        prefix2[0] = arr[0] == 1 ? 0 : 1;
        int count2 = 0;
        if(arr[0] == 2) count2++;

        for(int i = 1; i < n; i++){
            cin >> arr[i];
            prefix2[i] = arr[i] == 2 ? (prefix2[i-1] + 1) : prefix2[i-1];
            if(arr[i] == 2) count2++;
        }
        if(count2 % 2 == 1){
            cout << -1 << endl;
            continue;
        }
        //otherwise find first occourence of count2/2 
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(prefix2[i] == (count2 /2)){
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;

        


        
    }
    
}
