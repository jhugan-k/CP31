/*
    > loop through array and check condition a[i+1] disvisible by a[i]?
    > if yes, add 1 to a[i+1] and move to next element
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        int n;
        cin >> n;
        vector<int>arr;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x != 1) arr.push_back(x);
            else arr.push_back(x + 1);   
        }
        for(int i = 0; i + 1 < n; i++){
            if(arr[i+1] % arr[i] == 0) arr[i + 1]++;
        }
        for(auto it : arr){
            cout << it << " ";
        }
        cout << endl;
    }
}