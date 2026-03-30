/*
    > calcualte netTpCost for each index
    > sort by lowest net tp first
    > greedily select lowest net tp until coins are exhausted.

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
        long long coin; cin >> coin;
        vector<int>costs(n);
        for(int i = 0; i < n; i++){
            cin >> costs[i];
            costs[i] += i + 1;
        }
        sort(costs.begin(), costs.end());
        int tp = 0;
        for(auto c : costs){
            if(coin < c) break;
            coin -= c;
            tp++;
        }
        cout << tp << endl;
        
    }
    
}
