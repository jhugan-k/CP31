#include <bits/stdc++.h>
using namespace std;

    //find mismatch segment
    //expand l and r
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        int l = 0;
        while(l < n && a[l] == b[l]) l++;

        int r = n - 1;
        while(r >= 0 && a[r] == b[r]) r--;

        // expand
        while(l > 0 && b[l] >= b[l-1]) l--;
        while(r < n-1 && b[r] <= b[r+1]) r++;

        cout << l+1 << " " << r+1 << "\n";
    }
}