/*
    > take all numbers as string
    > iterate each number, see if divisible
    > if not, increase n and see again
    > brute force possible because fair numbers are frequent in practicality

*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc;
    cin >> tc;
    while(tc--){
        long long n; cin >> n;
        string s = to_string(n);
        if(s.size() == 1){
            cout << n << '\n';
            continue;
        }
        bool found = 0;
        while(!found){
            for(auto c : s){
                int num = c - '0';
                if(num == 0) continue;
                if(n % num != 0){
                    found = 0;
                    n++;
                    s = to_string(n);
                    break;
                }
                found = 1;
            }
        }
        cout << n << '\n';
    }
    
}
