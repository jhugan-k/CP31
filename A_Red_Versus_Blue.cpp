/*
    > inserting b in between r will create regions.
    > number of regions = b + 1
    > no. of r in each region = r / b + 1
    > if there is a remainder, it will be spread out across regions
    > add 1 to total if there is a remainder.

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        int n, r, b;
        cin >> n >> r >> b;
        int regions = b + 1;
        int InEach = r / regions;
        int remainder = r % regions;
        string s;
        int region_r = 0;
        while(s.length() < n){
            while(region_r < InEach) {
                s += 'R';
                region_r++;
            }
            if(remainder > 0){
                s += 'R';
                remainder--;
            }
            region_r = 0;
            s += 'B';
        }   
        s.pop_back();
        cout << s << endl;
    }
}
