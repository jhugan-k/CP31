#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc;
    cin >> tc;
    while(tc--){
        long long n; cin >> n;
        
        long long smallest_factor = -1;
        // Find the smallest prime factor of n
        for(long long i = 2; i * i <= n; i++){
            if(n % i == 0) {
                smallest_factor = i;
                break;
            }
        }

        if(smallest_factor == -1){
            // n is prime, largest proper divisor is 1
            cout << 1 << " " << n - 1 << endl;
        }
        else{
            // If i is the smallest factor, n/i is the largest proper divisor
            long long a = n / smallest_factor;
            long long b = n - a;
            cout << a << " " << b << endl;
        }
    }
    return 0;
}