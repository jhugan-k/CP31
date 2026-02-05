/*
    > Find prefixSum array and total sum
    > use this array to find sum between a range
    > calculate the difference between sum in range and (b-a + 1) * k (a and b being range for query)
    > add it to total sum and check if its odd
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int t = 0; t < tc; t++){
        int n, nq;
        cin >> n >> nq;

        vector<long long>arr (n + 1);
        vector<long long>prefixSum (n + 1);
        prefixSum[0] = 0;
        arr[0] = 0;

        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            arr[i] = x;
            prefixSum[i] = x + prefixSum[i-1];
        }
        
        long long totalSum = prefixSum.back();

        for(int i = 0; i < nq; i++){
            int a,b,k ;
            cin >> a >> b >> k;
            long long sumInRange = prefixSum[b] - prefixSum[a-1];
            long long newSum = 1LL * (b - a + 1) * k;
            long long finalSum = totalSum + (newSum - sumInRange);
            if(finalSum % 2 == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }

        
    }
    
}