#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void solve(){

    }
};
/*  if a == b:
    if c is odd, return first
    if c is even, return second

    if a != b:
    return whichever is greater
    a : first
    b : second
    (the one with more presses can just exhaust the common presses)


    > possible ec: 4 5 7
    > first: presses 4 + 4 = 8
    > second: presses 3 + 5 = 8
    > last press made by first
    > therefore second will win 
    
*/

int main(){
    Solution sol;
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int a;
        cin >> a;
        int b;
        cin >> b;
        int c;
        cin >> c;

        if(a == b) {
            if(c % 2 == 1) cout << "First" << endl;
            else cout << "Second" << endl;
            
        }
        else{
            // a != b
            if(a > b) cout << "First" << endl;
            else cout << "Second" << endl;
        }
       
    }
    return 0;
}