/*
    > sliding window
    > count no. of white in each sw
    > min. across all sw = ans

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
        int k; cin >> k;
        string s; cin >> s;

        int start = 0;
        int min_whiteCount = k;
        int curr_whiteCount = 0;

        for(int i = 0; i < s.size(); i++){

            if(s[i] == 'W') curr_whiteCount++;

            while(i - start + 1 > k){ 
                //reduce window length
                if(s[start] == 'W') curr_whiteCount--;
                start++;
            }
            //update if exactly k
            if(i - start + 1 == k) min_whiteCount = min(min_whiteCount, curr_whiteCount);
            
        }
        
        cout << min_whiteCount << endl;
    }
}
