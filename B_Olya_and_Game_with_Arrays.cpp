/*
    > one sacrifice array to hold minimums
    > sum of all second smallest elements
    > but sac array cant contribute sum, so minus its second smallest element
    > new min in sac array is global min, so add global min
    > maxBeauty = (sum of second smallest elements) - (smallest in second smallest elements) + global min


*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        int numArrays;
        cin >> numArrays;
        int global_min = INT_MAX;
        vector<int> min2;
        for(int i = 0; i < numArrays; i++){
            vector<int>temp;
            int x;
            cin >> x;
            for(int j = 0; j < x; j++){
                int k;
                cin >> k;
                temp.push_back(k);
            }
            sort(temp.begin(), temp.end());
            global_min = min(global_min, temp[0]);
            min2.push_back(temp[1]);
        }
        long long ans = 0;
        int min_min2 = INT_MAX;
        for(auto it : min2){
            min_min2 = min(min_min2, it);
            ans += it;
        }
        ans -= min_min2;
        ans += global_min;
        cout << ans << endl;
    }
}
