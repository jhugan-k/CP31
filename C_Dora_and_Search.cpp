/*
    > 2p: left and right
    > remove element if it is min or max
    > keep removing until cant remove (valid ans) or l == r (INvalid)
    > for tracking min/max, use set (st.begin(), st.rbegin())

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
        for(int i = 0; i < arr.size(); i++){
            cin >> arr[i];
        }
        int l = 0;
        int r = n - 1;
        set<int> st(arr.begin(), arr.end());

        while(l < r){
            int min = *st.begin();
            int max = *st.rbegin();
            if(arr[l] == min || arr[l] == max){
                //remove 
                st.erase(arr[l]);
                l++;
            }
            else if(arr[r] == min || arr[r] == max){
                //remove
                st.erase(arr[r]);
                r--;
            }
            else break; //cant remove. stop
        }
        if(l == r){
            cout << -1 << endl;
            continue;
        }
        cout << l + 1 << " " << r + 1 << endl;
    }
    
}
