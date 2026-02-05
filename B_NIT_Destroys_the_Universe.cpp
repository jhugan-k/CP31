/*
    > find no. of blocks of consecutive integers where 0 does not appear. 
    > answer is capped at 2. 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        int n;
        cin >> n;
        int blockCount = 0;
        bool inBlock = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x != 0) inBlock = 1;
            else{
                //either a leading 0 or in between
                if(inBlock) blockCount++;
                inBlock = 0;
            }
            if(i == n-1 && inBlock) blockCount++;
        }
        if(blockCount > 2) blockCount = 2;
        cout << blockCount << endl;
    }
}