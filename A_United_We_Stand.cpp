#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool solve(vector<int> sorted){
        int k = sorted[0];
        for(auto c : sorted){
            if(c != k) return false;
        }
        return true;
    }
};

int main(){
    Solution sol;
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int n;
        cin >> n;
        vector<int> arr;
        for(int j = 0; j < n; j++){
           int x;
           cin >> x;
           arr.push_back(x);
        }
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());

        if(sol.solve(sorted)){
            cout << -1 << endl;
            continue;
        }
        else{
            vector<int> a;
            vector<int> b;
            
            int k = 0;
            while(k < sorted.size() && sorted[k] == sorted[0]){
                a.push_back(sorted[k]);
                k++;
            }
            for(int l = k; l < sorted.size(); l++){
                b.push_back(sorted[l]);
            }
            cout << a.size() << " " << b.size() << endl;
            for(int i = 0; i < a.size(); i++){
                if(i == a.size() - 1){
                    cout << a[i] << endl;
                    break;
                }
                cout << a[i] << " ";
            }
            for(int i = 0; i < b.size(); i++){
                if(i == b.size() - 1){
                    cout << b[i] << endl;
                    break;
                }
                cout << b[i] << " ";
            }
        }
    }
    return 0;
}