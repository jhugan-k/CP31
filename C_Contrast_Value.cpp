#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        // remove consecutive duplicates
        vector<long long> v;
        v.push_back(a[0]);
        for(int i = 1; i < n; i++){
            if(a[i] != a[i-1]) v.push_back(a[i]);
        }

        if(v.size() == 1){
            cout << 1 << "\n";
            continue;
        }

        int ans = 2; // first + last

        for(int i = 1; i < (int)v.size() - 1; i++){
            if((v[i] > v[i-1] && v[i] > v[i+1]) ||   // peak
               (v[i] < v[i-1] && v[i] < v[i+1])){   // valley
                ans++;
            }
        }

        cout << ans << "\n";
    }
}