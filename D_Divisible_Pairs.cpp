/*


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
        vector<int> ldi(n);
        ldi[0] = 0;

        for(int i = 1; i < n; i++){
            if(arr[i] != arr[i-1]){
                //changed element. new ldi 
                ldi[i] = i-1;
            }
            else{
                //did not change element. keep previous ldi 
                ldi[i] = ldi[i-1];
            }
        }

        //process query


    }
    
}
