#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
    void solve(){

    }
};

// if cur.find(s) != string::npos
// double the string ten times and find s in it 

int main(){
    Solution sol;
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int n;
        cin >> n;
        int m;
        cin >> m;
        string s;
        cin >> s;
        string s2;
        cin >> s2;
        for(int j = 0; j <= 10; j++){

            if(s.find(s2) == string::npos) {
                if(j == 10){
                    int x = -1;
                    cout << x << endl;
                    break;
                }
                s += s;
                continue;
            }

            else {
                cout << j << endl;
                break;
            }
            
            
        }

    }
    return 0;
}