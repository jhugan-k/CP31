/*
    > bitwise AND over an array: is the smallest value we can reach by any other bitwise operation
    > we can force every value to reach this value smallest by ANDing over and over
    > count this and return
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        int n;
        cin >> n;
        int first;
        cin >> first;
        int ans = first;
        for(int i = 1; i < n; i++){
            int x;
            cin >> x;
            ans = ans & x;
        }
        cout << ans << endl;
    }
}