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
        long long w; cin >> w;
        map<long long, long long>mpp; // order map
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mpp[x]++;
        }
        long long rows = 0; 

        while(!mpp.empty()){
            //greedily select numbers which can fit
            long long currRemainingLength = w;
            rows++;
            
            while(true){
                auto it = mpp.upper_bound(currRemainingLength); //1 larger than remaining length
                if(it == mpp.begin()) break; 

                --it; //last element that can fit 
                currRemainingLength -= it->first;
                it->second--;
                if(it->second == 0) mpp.erase(it);
            }
        
        }

        cout << rows << endl;


        
    }
    
}
