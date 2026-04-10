#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    long long k, x;
    cin >> k >> x;

    vector<long long> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    vector<long long> gaps;

    for(int i = 1; i < n; i++){
        long long gap = arr[i] - arr[i-1];
        if(gap > x){
            gaps.push_back((gap - 1) / x);
        }
    }

    sort(gaps.begin(), gaps.end());

    int groups = gaps.size() + 1;

    for(auto cost : gaps){
        if(k >= cost){
            k -= cost;
            groups--;
        } else break;
    }

    cout << groups << endl;
}