#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void solve(int target){

    }
};

int main(){
    Solution sol;
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){

        int target;
        cin >> target;
        int k;
        cin >> k;
        int x;
        cin >> x;
        if(target == 1) {
            if(k > 1 || x == 1){
                cout << "NO" << endl;
                continue;
            }
            else{
                cout << "YES" << endl;
                cout << 1 << endl;
                cout << 1 << endl;
                continue;
            }
        }
         
        if(x != 1){
            cout << "YES" << endl;
            cout << target << endl;
            for(int i = 0; i < target; i++){
                if(i == target - 1){
                    cout << 1 << endl;
                    break;
                }
                cout << 1 << " ";
                
            }  
        }
        else{
            if(target % 2 == 0 && k >= 2){
                cout << "YES" << endl;
                cout << (target / 2) << endl;
                for(int i = 0; i < target/2; i++){
                    if(i == target/2 - 1){
                        cout << 2 << endl;
                        break;
                    }
                    cout << 2 << " ";
                }
            }
            else{
                if(k >= 3){
                    target = target - 3;
                cout << "YES" << endl;
                cout << 3 << " ";
                cout << (target / 2) << endl;
                for(int i = 0; i < target/2; i++){
                    if(i == target/2 - 1){
                        cout << 2 << endl;
                        break;
                    }
                    cout << 2 << " ";
                }
                }
                else{
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}