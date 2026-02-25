/*
    > if b == 1 then use an addition and increment b
    > run outer loop from additions (0 to 31) 
    > count number of divisions required for a = 0.
    > add to get total divisions. from these 30 possible values of b, use min()

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--){
        long long a, b;
        cin >> a >> b;
        long long min_ops = INT_MAX;
        long long original_a = a;
        for(int i = (b == 1 ? 1 : 0); i <= 32; i++){
            // i: number of additions done.
            // b + i: divisor being checked.
            long long currOps = i;
            while(a > 0){
                a = a / (b + i);
                currOps++;
            }
            min_ops = min(min_ops, currOps);
            a = original_a;
        }
        cout << min_ops << '\n';
    }
    
}
