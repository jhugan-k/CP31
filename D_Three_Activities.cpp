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
        vector<int> arr1(n);
        vector<int> arr2(n);
        vector<int> arr3(n);
        vector<pair<int,int>> ind1;
        vector<pair<int,int>> ind2;
        vector<pair<int,int>> ind3;
        
        for(int i = 0; i < n; i++){
            cin >> arr1[i];
            ind1.push_back({arr1[i], i});
        }
        for(int i = 0; i < n; i++){
            cin >> arr2[i];
            ind2.push_back({arr2[i], i});
        }
        for(int i = 0; i < n; i++){
            cin >> arr3[i];
            ind3.push_back({arr3[i], i});
        }
        sort(ind1.begin(), ind1.end(), greater<>());
        sort(ind2.begin(), ind2.end(), greater<>());
        sort(ind3.begin(), ind3.end(), greater<>());
        
        long long ans = 0;

        for(int i = 0; i < min(3, n); i++){
            for(int j = 0; j < min(3,n); j++){
                for(int k = 0; k < min(3,n); k++){
                    int a = ind1[i].second;
                    int b = ind2[j].second;
                    int c = ind3[k].second;

                    if(a != b && b != c && c != a){
                        long long sum = ind1[i].first + ind2[j].first + ind3[k].first;
                        ans = max(sum, ans);
                    }
                }
            }
        }

        cout << ans << endl;



    }
    
}
