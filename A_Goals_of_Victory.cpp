#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; 
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n - 1; ++i) {
            long long x; cin >> x;
            sum += x;
        }
        cout << -sum << "\n";
    }
    return 0;
}
