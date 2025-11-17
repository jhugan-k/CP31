#include<bits/stdc++.h>
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
        vector<int>temp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(i == n - 1){
                cout << (n - x + 1) << endl;
                break;
            }
            cout << (n - x + 1) << " ";
        }

    }

    return 0;
}