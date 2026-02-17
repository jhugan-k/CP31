/*
    > in case of wrap-around: double the string
    > start from back iteration. drop a pointer wherever found last g
    > if found required color, calculate max_wait.

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){

        int n; cin >> n;
        char color; cin >> color;
        string s; cin >> s;

        //double string and iterate back
        s += s;
        long long lastGreen = 0;
        long long maxWait = INT_MIN;
        for(int i = 2*n - 1; i >= 0; i--){
            if(s[i] == 'g') lastGreen = i;
            if(s[i] == color){
                maxWait = max(maxWait, lastGreen - i);
            }
        }
        cout << maxWait << endl;
    }
}


