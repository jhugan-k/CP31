/*
    > a % x = b % x >> a - b % x = 0
    > x must divide all (a-b)

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
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int i = 0;
        int j = n-1;
        int ans = 1;
        vector<int> diffs;
        while(i < j){
            int diff = abs(arr[i] - arr[j]);
            diffs.push_back(diff);
            i++;
            j--;
        }
        //calculate gcd for diffs
        int g = 0;
        for(auto it : diffs){
            g = gcd(g, it);
        }
        cout << g << '\n';

        
    }
    
}
