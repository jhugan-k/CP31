/*


*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc;
    cin >> tc;
    
    while(tc--){
        int n; cin >> n;
        vector<pair<long long, long long>>MEA;

        for(int i = 0; i < n; i++){
            int m; cin >> m; // number of monsters in this cave
            long long maxEffectiveArmor = 1;
            for(int j = 0; j < m; j++){
                long long a; cin >> a;
                maxEffectiveArmor = max(maxEffectiveArmor, a - j); //effective armor of this monster
            }
            MEA.push_back({maxEffectiveArmor, m});
        }
        sort(MEA.begin(), MEA.end());
        // start initial with smallest MEA + 1
        long long init = (MEA[0].first) + 1;
        long long currPower = init;
        //start checking caves

        for(int i = 0; i < n; i++){
            long long req = MEA[i].first + 1;
            if(currPower < req){
                init += req - currPower; //add difference to inital starting power
                currPower = req; // now matches required power for this dungeon
            }
            currPower += MEA[i].second; //power gain from clearing the dungeon
        
        }

        cout << init << endl; //final starting power 
    
    }
    
}
