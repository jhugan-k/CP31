/* 2 ^ no. of 0 x no. of 1s
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
        int zero = 0;
        int one = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == 0) zero++;
            if(x == 1) one++;
        }

        long long ans = pow(2, zero) * one;
        cout << ans << endl;
    }

}