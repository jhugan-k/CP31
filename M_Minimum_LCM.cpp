/*
    > if prime: return 1 and n-1
    > if not prime: return largest divisor and n - largest divisor
    > to find largest divisor: find smallest prime divisor 

*/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n < 2) return false;
    if(n % 2 == 0) return n == 2;
    for(long long i = 3; i * i <= n; i+= 2) if(n % i == 0) return false;
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        int n; cin >> n;
        if(isPrime(n)) cout << 1 << " " << n-1 << endl;
        else{
            //find smallest prime divisor
            int sd = n;
            for(long long i = 2; i * i <= n; i++){
                if(n % i == 0){
                    sd = i;
                    break;
                }
                
            }
            cout << n / sd << " " << n - (n / sd) << endl;
        }
    }
}
