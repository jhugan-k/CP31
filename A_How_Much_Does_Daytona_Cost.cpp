#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void solve(){

    }
};

int main(){
    Solution sol;
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int>arr;
        int ans = 0;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            if(x == k) ans = 1;
        }
        if(ans == 0){
            //not found
            cout << "NO" << endl;
        }

        else {
            // found 
            cout << "YES" << endl;
        }
        
    }
    return 0;
}
