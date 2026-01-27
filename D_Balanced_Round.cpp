/*
    > sort the array 
    > find length of longest consecutive sorted sequence with gap <= k
    > to be removed = arr.size - k.
*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i ++){
        int n, k;
        cin >> n >> k;
        vector<int>arr;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            arr.push_back(x);
        }

        if(arr.size() == 1){
            cout << 0 << endl;
            continue;
        }

        sort(arr.begin(), arr.end());
        int maxLen = 1;
        int currLen = 1;
        for(int j = 1; j < arr.size(); j++){
            if(arr[j] - arr[j-1] <= k){
                currLen++;
                maxLen = max(maxLen, currLen);
            }
            else{
                currLen = 1;
                maxLen = max(maxLen, currLen);
            }
        }
        cout << arr.size() - maxLen << endl;
    }
}