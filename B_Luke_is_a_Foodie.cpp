/*
    > expand inequality |v − a[i]| ≤ x ==  (-x <= v- a[i] <= x) === (a[i] - x <= v <= a[i] + x)
    > range of v: a[i] - x <= v <= a[i] + x to satisfy current a[i]
    > to satisfy multiple a[i]: must lie in all a[i]'s ranges
    > iterate left to right, mantain currentRange and changes counter 
    > new a[i]: overlap the range: new min = max(min1, min2) and new max = min(max1, max2)
    > if at any point new_min > new_max then not possible, increment change counter and reset current range to current a[i] range and continue



*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        int n; cin >> n;
        int x; cin >> x;
        int changes = 0;
        int currentMin = INT_MIN;
        int currentMax = INT_MAX;
        for(int i = 0; i < n; i++){
            int ai; cin >> ai;
            currentMin = max(currentMin, ai - x);
            currentMax = min(currentMax, ai + x);

            if(currentMin > currentMax){
                changes++;
                currentMin = ai - x;
                currentMax = ai + x;
            }
        }
        cout << changes << '\n';
    }
}
