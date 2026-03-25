#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--){
        int n; cin >> n;
        int final; cin >> final;

        int curr = 0;

        for(int i = 0; i < 3; i++){
            bool ok = true;

            for(int j = 0; j < n; j++){
                int x; cin >> x;

                if(ok && ((x | final) == final)){
                    curr |= x;
                } else {
                    ok = false;  // stop taking, but keep reading to consume all input.
                }
            }
        }

        if(curr == final) cout << "Yes\n";
        else cout << "No\n";
    }
}