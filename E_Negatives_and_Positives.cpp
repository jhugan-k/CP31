/*
    > count number of negatives

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
        long long sum = 0;
        int ncount = 0;
        long long lowestAbs = LLONG_MAX;
        for(int i = 0; i < n; i++){
            long long x; cin >> x;
            if(x < 0) ncount++;
            sum += abs(x);
            if(abs(x) < lowestAbs) lowestAbs = abs(x);
        }
        if(ncount % 2 == 1) sum -= (2 * lowestAbs);
        cout << sum << '\n';
    }
    
}
