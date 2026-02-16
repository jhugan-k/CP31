/*
    > greedily select lowest cost until it reaches all members 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        int n, direct;
        cin >> n >> direct;
        vector<pair<int,int>> residents(n);
        for(int i = 0; i < n; i++){
            cin >> residents[i].second;
        }
        for(int i = 0; i < n; i++){
            cin >> residents[i].first;
        }
        sort(residents.begin(), residents.end());
        int remaining = n - 1;
        long long totalCost = direct;
        int i = 0;
        while(remaining > 0){
            //find lowest cost and reduce from it 
            int cost = min(direct, residents[i].first);
            totalCost += cost;
            remaining--;
            if(residents[i].first < direct){
                //message was relayed by a resident and not pak
                residents[i].second--;
                if(residents[i].second == 0) i++;
                //relay capacity full, move to next resident
            }
        }

        cout << totalCost << endl;
        
        
        
    }
}
