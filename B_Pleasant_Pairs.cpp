/*
    > max value of i+j : n+ n-1 = 2n-1 
    > pair: a[i], i, then sort by a[i]
    > iterate on sorted pairs
    > if at point a[i] . a[j] >= 2n then break 

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
        int ans = 0;
        vector<pair<long long, long long>> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i].first;
            arr[i].second = i + 1;
        }
        sort(arr.begin(), arr.end());
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(arr[i].first * arr[j].first >= 2*n) break;
                if((arr[i].first * arr[j].first) == (arr[i].second + arr[j].second)) ans++;
            }
        }
        cout << ans << endl;    

    }
    
}
