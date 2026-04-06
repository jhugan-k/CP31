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
        int m; cin >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        long long val = 0;
        for(int i = 0; i < n; i++){
            vector<int>temp(m);
            for(int j = 0; j < m; j++){
                cin >> temp[j];
            }
            arr[i] = temp;
        }
        // read by column
        for(int j = 0; j < m; j++){
            vector<int> temp(n);
            for(int i = 0; i < n; i++){
                temp[i] = arr[i][j];
            }
            sort(temp.begin(), temp.end());
            for(int i = 0; i < n; i++){
                val += 1LL * temp[i] * i; // elements smaller than temp[i]
                val -= 1LL * temp[i] * (n - i - 1); // elements larger than temp[i]
            }
        }
        cout << val << endl;
    }
    
}
