/*
    > minimum value for XOR pair is decided by largest MSB.
    > when XORing a number with MSB 0 with MSB 1, xor will be 2^MSB. 
    > there will always be this value for every permutation. other bits will only increase the XOR value further 
    > to make lowest XOR among pairs permutation, the max XOR between each pair must be equal to MSB
    > all numbers lower than MSB: in reverse order, and 0 must be kept next to MSB
    > all numbers greater than MSB: in increasing order, after MSB
    > eg. for 5, MSB = log2(5) =  2. (Floor value). therefore  MSB = pow(2,2) - 1 = 3.
    > permutation: 2 1 0 3 4.
    > after MSB 0 and MSB 1 are xored, further XOR values cant pass 2^MSB - 1 because msb cant have 1 in xor again (xor value reduces)
    > aim is to minimise this xor value where MSB 0 and MSB 1 form the pair. then put 0 along with first MSB.

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        long long n; cin >> n;
        vector<long long>ans;
        long long msb = log2(n);
        long long num = pow(2, msb) - 1;

        for(int i = num; i >= 0; i--){
            ans.push_back(i);
        }
        for(int i = num + 1; i < n; i++){
            ans.push_back(i);
        }
        for(auto it : ans) cout << it << " ";
        cout << endl;
    }
}
