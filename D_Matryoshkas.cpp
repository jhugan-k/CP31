/*
    > sort
    > store duplicate counts in map
    > whenever encountering a duplicate, ++ its count in map.
    > if a duplicate exists for previous consecutive, -1 from it otherwise count++.

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
        sort(arr.begin(), arr.end());
        int count = 1;
        map<int,int> mpp;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] == arr[i-1]){
                //duplicate element
                mpp[arr[i]]++; //increase dupe count

                if(mpp.find(arr[i] - 1) != mpp.end() && mpp[arr[i] - 1] > 0){
                //there exists a dupe for previous element. attach this one to it and dont increase count
                mpp[arr[i] - 1]--;
                }
                else{
                    //no dupe exists. count must be increased
                    count++;
                }
            }
            else if(arr[i] - arr[i-1] > 1){
                //series break, increase count
                count++;
            }
            else continue;
            
        }
        cout << count << endl;
    }
    
}
