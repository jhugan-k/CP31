#include <bits/stdc++.h>
using namespace std;
// if n is divisible by 3: second  wins
// if n + 1 or n - 1 is divisible by 3: first wins 

class Solution {
    public:

    void solve(int n){
        if((n + 1) % 3 == 0 || (n - 1) % 3 == 0) {
            //first wins
            cout << "First" << endl;
        }
        else{
            //second wins 
            cout << "Second" << endl;
        }
        
    }
};

int main(){
    int tc;
    cin >> tc;
    Solution sol;
    for(int i = 0; i < tc; i ++){
        int n;
        cin >> n;
        sol.solve(n);
    }

    return 0;
}