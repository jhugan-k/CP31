#include<bits/stdc++.h>
using namespace std;
// if target is even: always possible
// if target is odd: possible only when k <= target and k is odd 
int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i ++){
        long long target;
        cin >> target;

        long long k;
        cin >> k;

        if(target % 2 == 0){
            cout << "YES" << endl;
        }
        else {
            if(k <= target && k % 2 == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }

    }

    return 0;
}