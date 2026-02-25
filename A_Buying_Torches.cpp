/*

*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc;
    cin >> tc;
    while(tc--){
        long long x, y, k;
        cin >> x >> y >> k;
        long long totalNeedStick = (k*y) + (k-1);
        long long numTrade = k + (totalNeedStick + (x - 2)) / (x - 1);
        cout << numTrade << '\n';
    }
    
}
