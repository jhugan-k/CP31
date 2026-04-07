#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc--){
        long long n, m;
        cin >> n >> m;

        vector<long long> a(m);
        for(int i = 0; i < m; i++) cin >> a[i];

        sort(a.begin(), a.end());

        vector<long long> gaps;

        // normal gaps
        for(int i = 1; i < m; i++){
            gaps.push_back(a[i] - a[i-1] - 1);
        }

        // circular gap
        gaps.push_back((n - a.back()) + (a[0] - 1));

        // sort descending
        sort(gaps.rbegin(), gaps.rend());

        long long days = 0;
        long long saved = 0;

        for(auto gap : gaps){
            long long remaining = gap - 2 * days;

            if(remaining <= 0) continue;

            if(remaining == 1){
                saved += 1;
                days += 1;
            }
            else{
                saved += (remaining - 1);
                days += 2;
            }
        }

        cout << n - saved << '\n';
    }
}