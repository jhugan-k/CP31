/*
    > not possible: if last element is 1, and n > 1
    > start from back side and see if arr[i] < arr[i+1]. if not, half arr[i] until condition is met, then reduce i

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        int n;
        cin >> n;
        bool possible = 1;
        vector<int>arr;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr.push_back(x);
        }
        int opcount = 0;
        for(int i = n - 2; i >= 0; i--){
            
            while(arr[i] >= arr[i+1] && arr[i] > 0){
                arr[i] = arr[i] / 2;
                opcount++;
            }
            if(arr[i] >= arr[i+1]){
                possible = false;
                break;
            }
        }
        if(possible) cout << opcount << endl;
        else cout << -1 << endl;
    }
}