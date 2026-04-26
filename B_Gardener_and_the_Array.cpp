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
        map<int,int> mpp;
        vector<vector<int>> nums;

        for(int i = 0; i < n; i++){

            //input set bits of each number
            int x; cin >> x;
            vector<int> temp;
            for(int j = 0; j < x; j++){
                int b; cin >> b;
                temp.push_back(b);
                mpp[b]++;
            }
            nums.push_back(temp);

        }
        //check each number in nums 
        bool found = 0;

        for(auto num : nums){
            bool valid = 1;
            for(auto it : num){
                if(mpp[it] <= 1){
                    valid = 0; //there exists a bit which is unique, provided into final OR only by this number. this number cannot be removed 
                    break;
                }
            }
            //all bits of number checked and didn't break : can be removed
            if(valid){
                found = 1;
                break;
            }
        }
        if(found) cout << "Yes" << endl;
        else cout << "No" << endl;

    }
    
}
