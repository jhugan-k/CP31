#include <bits/stdc++.h>
using namespace std;

// find distance from nearest edge, and +1 for each cell

class Solution{
    public:
    void solve(){

    }

    
};

int main(){
    Solution sol;
    int tc;
    cin >> tc;
    
    for(int t = 0; t < tc; t++){
        //read 10 rows 
        int total = 0;
        for(int row = 0; row < 10; row++){
            string s;
            cin >> s;
            for(int col = 0; col < 10; col++){
                if(s[col] == 'X'){
                    int score = min({row, col, 9-row, 9-col}) + 1;
                    total += score;
                }
            }
        }
        cout << total << endl;
    }
    return 0;
}