/*
    > prefix and suffix arrays to track number of distinct characters to left and right of each point

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){

        int n; cin >> n;
        string s; cin >> s;
        set<char>st;

        //calculate prefix
        vector<int>prefix(n);
        for(int i = 0; i < n; i++){
            st.insert(s[i]);
            prefix[i] = st.size();
        }
        st.clear();
        vector<int>suffix(n);

        //calculate suffix
        for(int i = n-1; i >= 0; i--){
            st.insert(s[i]);
            suffix[i] = st.size();
        }

        //check all possible points 
        int maxi = 0;
        for(int i = 0; i < n-1; i++){
            maxi = max(maxi, prefix[i] + suffix[i+1]);
        }
        cout << maxi << endl;


    }
}
