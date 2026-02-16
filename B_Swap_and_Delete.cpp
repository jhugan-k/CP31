/*
> number of 0 == number of 1 then always answer = 0.
> if not, then iterate and greedy place 1 and 0 opposite. if not able to place then return ans = remaining number of elements

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        string s;
        cin >> s;
        int zerocount = 0;
        int onecount = 0;
        for(auto c : s){
            if(c == '0') zerocount++;
            else onecount++;
        }
        if(zerocount == onecount){
            cout << 0 << endl;
            continue;

        }
        else{
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '0'){
                    if(onecount > 0) onecount--;
                    else{
                        cout << s.size() - i << endl;
                        break;
                    }
                }
                else{
                    if(zerocount > 0) zerocount--;
                    else{
                        cout << s.size() - i << endl;
                        break;
                    }
                }
            }
        }
    }
}
