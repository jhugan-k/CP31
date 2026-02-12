/*
> if n is odd: always yes
> if n is even: only no if strictly in 2^x
> to check if number belongs in 2^x: n & n - 1 == 0.
> due to bitwise AND: 2^x only have MSB = 1, 2^x - 1 have every bit except MSB == 1. so ANDing will give == 0 if n appears in 2^x.

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        long long n;
        cin >> n;
        if(n % 2 == 1){
            cout << "YES" << endl;
            continue;
        }
        else{
            if(n > 0 && (n & (n - 1)) == 0){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }
}
