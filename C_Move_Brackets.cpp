/*
    > iterate over string, keep closeCount, openCount
    > if s[i] is closeBracket and openCount < closeCount then move this to end
    > no need for moving openbreacket to beginning, because same op will be done by moving a close bracket to end

*/


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
        int close = 0; int open = 0;
        int opcount = 0;
        for(auto c : s){
            if(c == '(') open++;
            else close++;
            if(close > open){
                opcount++;
                close--;
            }
        }
        cout << opcount << '\n';
    }
    
}
