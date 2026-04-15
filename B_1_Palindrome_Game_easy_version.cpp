#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc;
    cin >> tc;
    while(tc--){
        int n; cin >> n;
        string s; cin >> s;

        int zerocount = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0') zerocount++;
        }

        if(zerocount == 1){
            cout << "BOB\n";
        }
        else if(zerocount % 2 == 1){
            cout << "ALICE\n";
        }
        else{
            cout << "BOB\n";
        }
    }
}