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
        int a; cin >> a;
        int b; cin >> b;
        int c; cin >> c;
        int d; cin >> d;

        long long xdiff = c - a;
        long long ydiff = d - b;
        int moves = 0;
        if(ydiff < 0){
            cout << -1 << endl;
            continue;
        }

        //move to y, add +1 to x on each move 

        moves += ydiff;
        xdiff -= moves;

        //adjust x. if cannot decrease x here, return -1
        if(xdiff > 0){
            // need to increase x but cannot. 
            cout << -1 << endl;
            continue;
        }

        else{
            moves += abs(xdiff);
        }

        cout << moves << endl;

    }
    
}
