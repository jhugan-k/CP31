/*
    > if end point is not divisible by k: jump directly, 1 jump
    > if end point is divisible by k: takes 2 jumps (jump to x - 1, then jump distance 1)

*/

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
        int x;
        cin >> x;
        int k;
        cin >> k;
        if(x % k != 0){
            // not divisible 
            cout << 1 << endl;
            cout << x << endl;
        }
        else{
            //divisible
            cout << 2 << endl;
            cout << x - 1 << " " << 1 << endl;
        }
    }
    return 0;
}