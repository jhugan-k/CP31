#include<bits/stdc++.h>
using namespace std;

// for even n: must be two distinct elements only, and equal in count
// for odd n: must be two dinstinct elements only, and differ by 1 in count

class Solution{
    public:
    void solve(vector<int> arr){
        unordered_map<int,int> mpp;
        int n = arr.size();
        for(int i = 0; i < arr.size(); i++){
            mpp[arr[i]]++;
        }
        if(n % 2 == 0){
            
        }
    }
};

int main(){
    Solution sol;
    
    return 0;
}