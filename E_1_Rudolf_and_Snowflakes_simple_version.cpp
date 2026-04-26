/*


*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc;
    cin >> tc;
    while(tc--){
        int n; cin >> n;
        int k = 2;
        bool valid = false;
        long long sum = 1;

        //check k upto rootN
        while(k * k <= n){

            for(int i = 1; i <= 20; i++){
                sum += pow(k,i);
                if(sum == n){
                    valid = true;
                    break;
                }
                else if(sum > n) break;
            }
            if(!valid){
                //check next k
                k++;
                sum = 1;
            }
            else break;
        }

        if(valid) cout << "YES" << endl;
        else cout << "NO" << endl;
            
        
    }
    
}
