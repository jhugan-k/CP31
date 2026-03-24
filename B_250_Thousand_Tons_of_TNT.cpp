/*
    > find all divisors of n
    > run max_sum and min_sum for all divisors of n, TC = n * rootN

*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<long long>arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        //find divisors of n
        long long maxDiff = 0;
        for(int i = 1; i * i <= n; i++){
            
            if(n % i == 0){
                // i is divisor. check both i and its complement divisor 
                vector<int> lens = {i, n/i};

                for(auto k : lens){
                    long long minsum = LLONG_MAX;
                    long long maxsum = LLONG_MIN;
                    long long currSum = 0;
                    int length = 0;
                    for(int j = 0; j < n; j++){
                        currSum += arr[j];
                        length++;
                        if(length == k){
                            //update sums, move to next
                            minsum = min(minsum, currSum);
                            maxsum = max(maxsum, currSum);
                            currSum = 0;
                            length = 0;
                        }
                        
                    }
                    maxDiff = max(maxDiff, maxsum - minsum);
                }
            }
        }
        cout << maxDiff << '\n';
    }
    
}
