/*
    > maximise b x h
    > largest dist bw two points in same side = max b
    > opposite = w or h = max height.

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        long long w, h;
        cin >> w >> h;

        long long ans = 0;

        for (int i = 0; i < 4; i++) {
            int k;
            cin >> k;

            vector<long long> a(k);
            for (auto &x : a) cin >> x;

            long long base = a.back() - a.front();

            if (i < 2) ans = max(ans, base * h); // bottom or top
            else ans = max(ans, base * w);       // left or right
        }

        cout << ans << "\n";
    }
}
