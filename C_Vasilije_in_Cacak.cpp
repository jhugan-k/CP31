#include <bits/stdc++.h>
using namespace std;


/*
> input line: n, k, x
> check last k numbers from 1 to n. if last k numbers are < sum, no other numbers can make the sum.

*/
int main(){
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        long long n;
        cin >> n;
        long long k;
        cin >> k;
        long long x;
        cin >> x;

        long long minsum = k * (k + 1) / 2;
        long long maxsum = k * n - k * (k - 1) / 2;


        if(x >= minsum && x <= maxsum) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}