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
        long long n; cin >> n;
        long long m; cin >> m;
        vector<long long> friendInt(n);
        for(int i = 0; i < n; i++) cin >> friendInt[i];
        
        //store costs and their counts in map
        map<long long, int> mpp;
        vector<long long> costs (m);

        for(int i = 0; i < m; i++){
            long long x; cin >> x;
            costs[i] = x;
            mpp[x]++;
        }

        long long totalCost = 0;
        //check each friend 
        for(int i = 0; i < n; i++){
            long long num = friendInt[i];
            //find minimum cost for this friend 
            for(auto it = mpp.begin(); it != mpp.end(); it++){
                if(it->first > num){
                    totalCost += costs[num];
                    break; //will use cash for this friend instead. no smaller present can be bought
                }
                //otherwise, will use smaller present if index allows 
                if(it->second <= num){
                    //index allows: j <= ki. use the present
                    totalCost += it->first;
                    it->second--; 
                    if(it->second == 0) mpp.erase(it);
                    break; //move to next friend 
                }

            }

        }
        cout << totalCost << endl;
    }
    
}
