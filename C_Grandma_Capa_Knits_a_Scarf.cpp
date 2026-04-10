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
        string s; cin >> s;
        int l = 0;
        int r = n-1;
        vector<pair<char,char>> deleted;
        while(l < r){
            if(s[l] == s[r]){
                l++;
                r--;
                continue;
            }
            else{
                //branch: delete l or delete r
                deleted.push_back({s[l], s[r]});
                break;
            }
        }
        if(deleted.size() == 0){
            //no need to delete anything, already a palindrome 
            cout << 0 << endl;
            continue;
        }
        //loop twice: once for each deleted char
        char deletedChar = deleted[0].first;
        bool valid1 = 1;
        pair<int,int>splitPoint = {l,r};
        int deletedCount1 = 0;

        while(l < r){
            if(s[l] != s[r]){
                // check if either l or r is deletedChar. if not, then invalid 
                if(s[l] == deletedChar){
                    l++;
                    deletedCount1++;
                    continue; //delete and continue
                }
                else if(s[r] == deletedChar){
                    r--;
                    deletedCount1++;
                    continue; //delete and continue;
                }
                else{
                    //mismatch and neither is deletedChar. invalid
                    valid1 = 0;
                    break;
                }
            }
            else{ //both equal. continue
                l++;
                r--;
            }
        }

        //run again for second case
        deletedChar = deleted[0].second;
        //reset l and r to split point
        l = splitPoint.first;
        r = splitPoint.second;
        int deletedCount2 = 0;
        bool valid2 = 1;
        while(l < r){
            if(s[l] != s[r]){
                // check if either l or r is deletedChar. if not, then invalid 
                if(s[l] == deletedChar){
                    l++;
                    deletedCount2++;
                    continue; //delete and continue
                }
                else if(s[r] == deletedChar){
                    r--;
                    deletedCount2++;
                    continue; //delete and continue;
                }
                else{
                    //mismatch and neither is deletedChar. invalid
                    valid2 = 0;
                    break;
                }
            }
            else{
                //both equal. continue
                l++;
                r--;
            }
        }
        //checked both cases. see valid
        if(!valid1 && !valid2) cout << -1 << endl;
        else if(valid1 && valid2) {
        cout << min(deletedCount1, deletedCount2) << endl;
        }
        else if(valid1) {
        cout << deletedCount1 << endl;
        }
        else {
        cout << deletedCount2 << endl;
        }

    }
    
}
