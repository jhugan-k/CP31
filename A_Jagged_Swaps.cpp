#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void solve(){

    }
};

int main(){
    Solution sol;
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int n;
        cin >> n;
        vector<int>temp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        if(is_sorted(temp.begin(), temp.end())) {
            cout << "YES" << endl;
            continue;
        }

        for(int i = 1; i < n - 1; i++){
            if(temp[i] > temp[i-1] && temp[i] > temp[i+1]){
                //swap
                swap(temp[i], temp[i+1]);
            }
        }
        if(is_sorted(temp.begin(), temp.end())) cout << "YES" << endl;
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}