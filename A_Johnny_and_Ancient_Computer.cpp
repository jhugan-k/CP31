/*
    > assume b is the bigger integer, a is the smaller. 
    > if not, then swap both. no. of ops will be same. 
    > loop and find power of 2 in b, by dividing. continue until  b is not divisble or b reaches <= a. store the last instance of b
    > if lastInstance = a: valid, otherwise invalid 
    > if valid, ans: (pow2 / 3)
    > if pow2 % 3 != 0 then add 1 to ans.


*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc;
    cin >> tc;
    while(tc--){
        long long a, b;
        cin >> a >> b;
        if(a == b) {
            cout << 0 << '\n';
            continue;
        }
        if(a > b) swap(a, b);
        int pow2 = 0;
        long long temp = b;
        while(temp % 2 == 0 && temp > a){
            temp = temp / 2;
            pow2++;
        }
        if(temp != a){
            cout << -1 << '\n';
            continue;
        }
        else{
            int ans = pow2 / 3;
            if(pow2 % 3 != 0) ans++;
            cout << ans << '\n';
        }
    }
    
}
