/*
    > count total negatives 
    > if even: return sum
    > if odd: return sum - 2 * smallest absolute.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc;
    cin >> tc;
    while(tc--){

        int n, m;
        cin >> n >> m;

        int negativeCount = 0;
        int smallest  = INT_MAX;
        int sum = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int x; cin >> x;
                if(x < 0) negativeCount++;
                smallest = min(smallest, abs(x));
                sum += abs(x);
            }
        }
        if(negativeCount % 2 == 0) cout << sum << endl;
        else cout << sum - (2 * smallest) << endl;
    }
    
}