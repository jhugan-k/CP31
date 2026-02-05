/*
    > if n is odd or n < 4, return -1
    > min = total / 6 
    > max = total / 4, +1 if not divisible by 6.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int t = 0; t < tc; t++){
        long long n;
        cin >> n;
        if(n % 2 == 1 || n < 4){
            cout << -1 << endl;
            continue;
        }
        long long min = n / 6;
        long long max = n / 4;
        if(n % 6 != 0) min++;
        cout << min << " " << max << endl;
    }
}