/*
    > only output NO if one element appears more than once
    > if all elements are distinct, the array a corresponds to bits of a long binary number upto 10^9
    > selecting any 2 subarray means selecting any two distinct sets of bit values
    > these sets of bit values can not be same since they correspond to two different binary numbers, since all 2^n are distinct

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
        unordered_set<long long> st;
        for(int i = 0; i < n; i++){
            long long x; cin >> x;
            st.insert(x);   
        }
        if(st.size() < n) cout << "YES" << '\n';
        else cout << "NO" << '\n';

        
    }
    
}
