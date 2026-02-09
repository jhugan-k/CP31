#include<bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        long long a, b, c; // Use long long to be safe
        cin >> a >> b >> c;

        bool possible = false;

        // 1. Can we change 'a'? 
        long long new_a = 2 * b - c;
        if (new_a > 0 && new_a % a == 0) possible = true;

        // 2. Can we change 'b'? 
        // Must check if (a+c) is even first!
        if ((a + c) % 2 == 0) {
            long long new_b = (a + c) / 2;
            if (new_b > 0 && new_b % b == 0) possible = true;
        }

        // 3. Can we change 'c'?
        long long new_c = 2 * b - a;
        if (new_c > 0 && new_c % c == 0) possible = true;

        if (possible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}