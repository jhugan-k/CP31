/*
    > bool isPrime function
    > start loop: 1 + d.
    > check isPrime in loop, if not then increment
    > start next loop at (prime + d) 
    > check isPrime, if not then increment.
    > found both primes, return prime1 x prime2
*/

#include <bits/stdc++.h>
using namespace std;


bool isPrime(long long n){
    if(n < 2) return false;
    for(long long i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}   

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc;
    cin >> tc;
    while(tc--){
        int d; cin >> d;
        long long num1 = 1 + d;
        while(true){
            if(isPrime(num1)) break;
            else num1++;
        }
        long long num2 = num1 + d;
        while(true){
            if(isPrime(num2)) break;
            else num2++;
        }
        long long ans = num1 * num2;
        cout << ans << '\n';
    }
    
}
