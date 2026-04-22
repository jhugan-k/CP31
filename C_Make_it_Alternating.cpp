/*
    > cant allot values outside a function
    > pre-compute factorial to reduce time 
    > can remove i++ from for loop, if manually updating i inside
    > use long long for intermediate multiplications, even in MOD: it can overflow. 

*/


#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
const int x = 2e5 + 5;
long long fact[x];


void init(){
    fact[0] = 1;
    for(int i = 1; i < x; i++){
        fact[i] = fact[i-1] * i % MOD;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    init();

    long long tc;
    cin >> tc;
    while(tc--){
        string s; cin >> s;
        long long ops = 0;
        long long ways = 1;

        for(int i = 0; i < s.size();){
            int j = i;
            while(j < s.size() && s[i] == s[j]) j++;
            int len = j - i;
            ops += len - 1;
            ways = ways * (len) %MOD;
            i = j;
        }   

        ways = ways * fact[ops] %MOD;
        cout << ops << " " << ways << endl;
    }
    
}
