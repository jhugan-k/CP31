/*
    > die in order of mods (smallest mod dies first)
    > if mod is same: first index dies first
    > store mods and their indexes in pair vector
    > sort pair vector: by mods
    > cout 
*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        long long n, k;
        cin >> n >> k;
        vector<pair<long long,long long>> arr;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            long long l = (x % k == 0 ? k : x % k);
            arr.push_back({-l, i+1});
        }
        sort(arr.begin(), arr.end());
        for(auto it : arr){
            cout << it.second << " ";
        }
        cout << endl;
    }
}
