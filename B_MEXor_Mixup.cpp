/*
    > input mex and xor, while XORing all.
    > initial size of array = 0 to m-1 = m.
    > if totalXOR == b, ans = size, exit
    > else if totalXOR != b:{
        >> if(mex != totalXOR ^ b) add 1 to size.
        >> if(mex == totalXOR ^ b) add 2 to size.
    }
    > compute XOR in O(1):
    >> n % 4 == 0 → XOR = n
       n % 4 == 1 → XOR = 1
       n % 4 == 2 → XOR = n + 1
       n % 4 == 3 → XOR = 0
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    

    while(tc--){
        
        int m, b;
        cin >> m >> b;

        int totalXOR = 0;
        if((m - 1) % 4 == 0) totalXOR = m-1;
        else if((m - 1) % 4 == 1) totalXOR = 1;
        else if((m - 1) % 4 == 2) totalXOR = m;
        else if((m - 1) % 4 == 3) totalXOR = 0;

        int ans = m;
        if(totalXOR == b){
            cout << ans << endl;
            continue;
        }
        if(m != (totalXOR ^ b)) cout << ans + 1 << endl;
        else cout << ans + 2 << endl;
        

    }
}
