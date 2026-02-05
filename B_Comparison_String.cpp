/*
   > count longest sequence of consecutive > or <, then return +1
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        int n;
        cin >> n;
        
        int streak = 1;
        int maxStreak = 1;
        string s;
        cin >> s;
        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1]) streak++;
            else streak = 1;
            maxStreak = max(maxStreak, streak);
        }
        cout << maxStreak + 1 << endl;
    }
}