#include<bits/stdc++.h>
using namespace std;

// if cells contain . . . return 2, infinite refills 
// if cells do not contain . . . then count number of . and return it as answer 

class Solution{
    void solve(){

    }
};

int main(){

    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int len;
        cin >> len;
        string cells;
        cin >> cells;
        int dotcount = 0;
        int ans = 0;
        for (int j = 0; j < len; j++){
            if(cells[j] == '.') dotcount++;
            if(j >= 2) {
                if(cells[j] == '.' && cells[j-1] == '.' && cells[j-2] == '.'){
                    // . . . 
                    ans = 2;
                    cout << ans << endl;
                    break;
                }
            }
        }
        if(ans == 0) cout << dotcount <<endl;
    }
    return 0;
}