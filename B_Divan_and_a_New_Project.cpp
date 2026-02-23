/*
    > most visited building: put closer
    > set base as 0. use front and back to put one by one

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
        vector<int>visits(n + 1);
        unordered_map<int,int> mpp;
        // map will store: <visits, index>
        
        for(int i = 1; i <= n; i++) {
            cin >> visits[i];
            mpp[visits[i]] = i;
        }
        
        // sort by no. of visits
        sort(visits.begin(), visits.end());

        int front = 1;
        int back = -1;
        int flag = 0;
        // flag 0: place on front coordinate
        // flag 1: place on back coordinate 

        vector<int> ans(n+1);
        ans[0] = 0;
        //place HQ on coordinate 0. 

        for(auto it : visits){

            //assign a coordinate
            int coordinate = 0;
            if(flag == 0){ // place on front
                coordinate = front;
                flag = 1;
                front++;
            }
            else{ // place on back
                coordinate = back;
                flag = 0;
                back--;
            }

            // place this coordinate into appropriate index
            int index = mpp[it];
            ans[index] = coordinate;
        }

        for(auto it : ans) cout << it << " ";
        cout << endl;
    }
}
