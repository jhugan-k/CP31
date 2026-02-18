#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, d; // Use long long for d to prevent overflow
    if (!(cin >> n >> d)) return 0;

    vector<int> power(n);
    for (int i = 0; i < n; i++) {
        cin >> power[i];
    }

    sort(power.begin(), power.end());

    int low = 0;
    int high = n - 1;
    int teamcount = 0;

    while (low <= high) {
        // Pick the strongest available player as the leader
        long long leaderPower = power[high];
        high--;
        
        // We start with 1 player (the leader)
        long long currentTeamSize = 1;
        
        // While the team's total power (leader * size) is NOT enough,
        // take the weakest players from the 'low' end to join the team.
        while (leaderPower * currentTeamSize <= d && low <= high) {
            low++;
            currentTeamSize++;
        }

        // Check if we actually met the requirement or just ran out of players
        if (leaderPower * currentTeamSize > d) {
            teamcount++;
        }
    }

    cout << teamcount << endl;
    return 0;
}