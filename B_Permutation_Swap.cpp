/*
    > find GCD of all distances 
    > return ans
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){

        int n;
        cin >> n;
        vector<int> arr(n,0);

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            arr[i] = x;
        }

        int g = 0;
        for (int i = 0; i < n; i++) {
            int target = arr[i] - 1;          // where a[i] should be in sorted array
            g = gcd(g, abs(i - target));    // accumulate gcd of displacements
        }
        cout << g << endl;

    }
}
